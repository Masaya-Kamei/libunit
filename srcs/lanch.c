/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lanch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:13:50 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/20 17:33:33 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libunit_develop.h"

static void	execute_unit_test(t_test_func test_func)
{
	alarm(TIMEOUT);
	exit(test_func());
}

static int	judge_test(const char *test_name, const int status)
{
	int			signum;
	const char	msgs[5][8] = {"SEGV", "BUSE", "TIMEOUT", "FPE", "ABRT"};
	int			i;

	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			printf("\t> %-40s: [%sOK%s]\n", test_name, GREEN, RESET);
		else
			printf("\t> %-40s: [%sKO%s]\n", test_name, RED, RESET);
	}
	else if (WIFSIGNALED(status))
	{
		signum = WTERMSIG(status);
		i = -1 + (signum == SIGSEGV) + ((signum == SIGBUS) * 2)
			+ ((signum == SIGALRM) * 3) + ((signum == SIGFPE) * 4)
			+ ((signum == SIGABRT) * 5);
		if (i != -1)
			printf("\t> %-40s: [%s%s%s]\n", test_name, RED, msgs[i], RESET);
		else
			printf("\t> %-40s: [%sSIG %d%s]\n", test_name, RED, signum, RESET);
	}
	return (get_test_status(WIFEXITED(status) && WEXITSTATUS(status) == 0));
}

static int	judge_all_tests(const int test_num, const int ok_num)
{
	if (test_num == ok_num)
		printf("\t%s%d/%d tests checked%s\n", GREEN, ok_num, test_num, RESET);
	else
		printf("\t%s%d/%d tests checked%s\n", RED, ok_num, test_num, RESET);
	return (get_test_status(test_num == ok_num));
}

int	launch_unit_tests(t_ut_list **test_list, const char *test_title)
{
	int			test_num;
	int			ok_num;
	pid_t		pid;
	t_ut_list	*list;
	int			status;

	setbuf(stdout, NULL);
	printf("%s:\n", test_title);
	test_num = 0;
	ok_num = 0;
	list = *test_list;
	while (list)
	{
		pid = fork();
		if (pid == -1)
			exit_with_errout("fork failed");
		else if (pid == 0)
			execute_unit_test(list->test_func);
		wait(&status);
		ok_num += (judge_test(list->name, status) == 0);
		test_num++;
		list = list->next;
	}
	ut_lstclear(test_list);
	return (judge_all_tests(test_num, ok_num));
}
