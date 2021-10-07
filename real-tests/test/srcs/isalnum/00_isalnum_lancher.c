/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isalnum_lancher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:30:42 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 11:54:34 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "unit_isalnum.h"

int	isalnum_launcher(void)
{
	t_ut_list	*test_list;

	test_list = NULL;
	load_unit_test(&test_list, "isalnum basic test", &isalnum_basic);
	load_unit_test(&test_list, "isalnum mod 256 test", &isalnum_mod_256);
	return (launch_unit_tests(&test_list, "ISALNUM"));
}
