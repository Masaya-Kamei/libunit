/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_lancher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:24:14 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 14:24:56 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "is_prime_test.h"

int	is_prime_launcher(void)
{
	t_ut_list	*test_list;

	test_list = NULL;
	load_unit_test(&test_list, "is_prime basic test", &is_prime_basic_test);
	load_unit_test(&test_list, "is_prime bigger test", &is_prime_bigger_test);
	return (launch_unit_tests(&test_list, "IS_PRIME"));
}
