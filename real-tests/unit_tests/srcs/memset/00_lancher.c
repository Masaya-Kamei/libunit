/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_lancher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:06:40 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 13:59:07 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "memset_test.h"

int	memset_launcher(void)
{
	t_ut_list	*test_list;

	test_list = NULL;
	load_unit_test(&test_list, "memset basic test", &memset_basic_test);
	return (launch_unit_tests(&test_list, "MEMSET"));
}
