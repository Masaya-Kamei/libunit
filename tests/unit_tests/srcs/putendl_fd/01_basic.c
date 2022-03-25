/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:18:55 by mkamei            #+#    #+#             */
/*   Updated: 2022/03/25 12:38:38 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "putendl_fd_test.h"

int	putendl_fd_basic_test(void)
{
	char	*str;

	capture_stdout();
	ft_putendl_fd("abc", STDOUT_FILENO);
	str = get_captured_stdout();
	if (strcmp(str, "abc\n") == 0)
	{
		free(str);
		return (0);
	}
	else
	{
		free(str);
		return (-1);
	}
}
