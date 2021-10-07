/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_lancher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:14:02 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 13:55:07 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "calloc_test.h"

int	calloc_launcher(void)
{
	t_ut_list	*test_list;

	test_list = NULL;
	load_unit_test(&test_list, "calloc basic test", &calloc_basic_test);
	return (launch_unit_tests(&test_list, "CALLOC"));
}
