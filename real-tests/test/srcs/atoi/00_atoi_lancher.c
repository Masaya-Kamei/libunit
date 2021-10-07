/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_lancher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:50:23 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 11:11:26 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "unit_atoi.h"

int	atoi_launcher(void)
{
	t_ut_list	*test_list;

	test_list = NULL;
	load_unit_test(&test_list, "atoi basic test", &atoi_basic);
	load_unit_test(&test_list, "atoi space test", &atoi_space);
	load_unit_test(&test_list, "atoi spaces test", &atoi_spaces);
	load_unit_test(&test_list, "atoi sign test", &atoi_sign);
	load_unit_test(&test_list, "atoi signs test", &atoi_signs);
	load_unit_test(&test_list, "atoi INT MAX test", &atoi_int_max);
	load_unit_test(&test_list, "atoi INT MIN test", &atoi_int_min);
	load_unit_test(&test_list, "atoi LONG MAX test", &atoi_long_max);
	load_unit_test(&test_list, "atoi LONG MIN test", &atoi_long_min);
	load_unit_test(&test_list, "atoi zero zero test", &atoi_zero_zero);
	load_unit_test(&test_list, "atoi null term test", &atoi_null_term);
	return (launch_unit_tests(&test_list, "ATOI"));
}
