/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_lancher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:13:25 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 13:54:39 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "bzero_test.h"

int	bzero_launcher(void)
{
	t_ut_list	*test_list;

	test_list = NULL;
	load_unit_test(&test_list, "bzero basic test", &bzero_basic_test);
	return (launch_unit_tests(&test_list, "BZERO"));
}
