/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdout.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:25:06 by mkamei            #+#    #+#             */
/*   Updated: 2022/03/25 13:13:30 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libunit_develop.h"

static char			*g_buf = NULL;
static int			g_stdout_copy_fd;
static pthread_t	g_thread = NULL;
static int			g_capture_pipe[2];

static char	*my_realloc(char *str, const ssize_t new_str_size)
{
	char	*new_str;

	new_str = realloc(str, new_str_size);
	if (new_str == NULL)
	{
		free(str);
		return (NULL);
	}
	return (new_str);
}

static char	*get_string_from_fd(const int fd, const size_t max_read_size)
{
	ssize_t	str_len;
	ssize_t	read_status;
	char	*str;

	str_len = 0;
	str = NULL;
	while (42)
	{
		str = my_realloc(str, str_len + max_read_size + 1);
		if (str == NULL)
			return (NULL);
		read_status = read(fd, &str[str_len], max_read_size);
		if (read_status == -1)
		{
			free(str);
			return (NULL);
		}
		else if (read_status == 0)
			break ;
		str_len += read_status;
	}
	str[str_len] = '\0';
	return (my_realloc(str, str_len + 1));
}

static void	*drain_stdout(void *p)
{
	(void)p;
	g_buf = get_string_from_fd(g_capture_pipe[0], PIPE_BUF);
	if (g_buf == NULL)
		abort();
	if (close(g_capture_pipe[0]) == -1)
		abort();
	return (NULL);
}

void	capture_stdout(void)
{
	if (g_thread)
		return ;
	if (pipe(g_capture_pipe) == -1)
		abort();
	g_stdout_copy_fd = dup(STDOUT_FILENO);
	if (g_stdout_copy_fd == -1)
		abort();
	if (dup2(g_capture_pipe[1], STDOUT_FILENO) == -1)
		abort();
	if (close(g_capture_pipe[1]) == -1)
		abort();
	if (pthread_create(&g_thread, NULL, drain_stdout, NULL) != 0)
		abort();
}

char	*get_captured_stdout(void)
{
	if (g_thread == NULL)
		return (NULL);
	if (dup2(g_stdout_copy_fd, STDOUT_FILENO) == -1)
		abort();
	if (close(g_stdout_copy_fd) == -1)
		abort();
	if (pthread_join(g_thread, NULL) != 0)
		abort();
	g_thread = NULL;
	return (g_buf);
}
