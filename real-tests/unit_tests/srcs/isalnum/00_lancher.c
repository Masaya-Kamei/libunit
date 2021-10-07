/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_lancher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:30:42 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 13:55:51 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "isalnum_test.h"

int	isalnum_launcher(void)
{
	t_ut_list	*test_list;

	test_list = NULL;
	load_unit_test(&test_list, "isalnum basic test", &isalnum_basic_test);
	load_unit_test(&test_list, "isalnum mod 256 test", &isalnum_mod_256_test);
	return (launch_unit_tests(&test_list, "ISALNUM"));
}
