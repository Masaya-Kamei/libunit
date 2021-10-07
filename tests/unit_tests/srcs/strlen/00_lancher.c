/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_lancher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:27:11 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 14:35:48 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "strlen_test.h"

int	strlen_launcher(void)
{
	t_ut_list	*test_list;

	test_list = NULL;
	load_unit_test(&test_list, "strlen basic test", &strlen_basic_test);
	load_unit_test(&test_list, "strlen null test", &strlen_null_test);
	return (launch_unit_tests(&test_list, "STRLEN"));
}
