/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:08:54 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/19 20:21:31 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

static int	ft_strlen_basic_test(void)
{
	return (get_test_status(strlen("Hello") == ft_strlen("Hello")));
}

static int	ft_strlen_null_term_test(void)
{
	return (get_test_status(strlen("") == ft_strlen("")));
}

int	ft_strlen_launcher(void)
{
	t_ut_list	*test_list;

	test_list = NULL;
	load_unit_test(&test_list, "basic", &ft_strlen_basic_test);
	load_unit_test(&test_list, "null term", &ft_strlen_null_term_test);
	return (launch_unit_tests(&test_list, "FT_STRLEN"));
}
