/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lanch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:13:50 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/06 11:54:30 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libunit_utils.h"

static int	judge_test(char *test_name, int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			printf("\t> %s\t: [%sOK%s]\n", test_name, GREEN, RESET);
			return (0);
		}
		else
			printf("\t> %s\t: [%sKO%s]\n", test_name, RED, RESET);
	}
	else if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			printf("\t> %s\t: [%sSEGV%s]\n", test_name, RED, RESET);
		else if (WTERMSIG(status) == SIGBUS)
			printf("\t> %s\t: [%sBUSE%s]\n", test_name, RED, RESET);
		else if (WTERMSIG(status) == SIGALRM)
			printf("\t> %s\t: [%sTIMEOUT%s]\n", test_name, RED, RESET);
		else if (WTERMSIG(status) == SIGFPE)
			printf("\t> %s\t: [%sFPE%s]\n", test_name, RED, RESET);
		else
			printf("\t> %s\t: [%sUNKNOWN SIGNAL%s]\n", test_name, RED, RESET);
	}
	return (-1);
}

static int	judge_all_tests(int test_num, int ok_num)
{
	if (test_num == ok_num)
	{
		printf("\t%s%d/%d tests checked%s\n", GREEN, ok_num, test_num, RESET);
		return (0);
	}
	else
	{
		printf("\t%s%d/%d tests checked%s\n", RED, ok_num, test_num, RESET);
		return (-1);
	}
}

int	launch_unit_tests(t_list **test_list, char *test_title)
{
	const int	test_num = ft_lstsize(*test_list);
	int			ok_num;
	pid_t		pid;
	t_list		*list;
	int			status;

	printf("%s\n", test_title);
	ok_num = 0;
	list = *test_list;
	while (list)
	{
		pid = fork();
		if (pid == -1)
			exit_with_errout("fork failed");
		else if (pid == 0)
		{
			alarm(TIMEOUT);
			exit(((t_unit_test *)list->content)->test_func());
		}
		wait(&status);
		ok_num += judge_test(((t_unit_test *)list->content)->name, status) == 0;
		list = list->next;
	}
	ft_lstclear(test_list, free);
	return (judge_all_tests(test_num, ok_num));
}
