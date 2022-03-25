/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_lancher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:17:46 by mkamei            #+#    #+#             */
/*   Updated: 2022/03/25 12:38:35 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "putendl_fd_test.h"

int	putendl_fd_launcher(void)
{
	t_ut_list	*test_list;

	test_list = NULL;
	load_unit_test(&test_list, "putendl_fd basic test", &putendl_fd_basic_test);
	load_unit_test(&test_list, "putendl_fd big test", &putendl_fd_big_test);
	return (launch_unit_tests(&test_list, "PUTENDL_FD"));
}
