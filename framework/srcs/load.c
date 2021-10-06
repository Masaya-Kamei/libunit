/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:33:28 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/06 11:54:35 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libunit_utils.h"

void	put_header(void)
{
	printf("*********************************\n");
	printf("***      42 - Unit Tests      ***\n");
	printf("*********************************\n");
}

void	load_unit_test(t_list **test_list, char *test_name, t_test_func f)
{
	t_unit_test	*unit_test;
	t_list		*new_list;

	unit_test = (t_unit_test *)malloc(sizeof(t_unit_test) * 1);
	if (unit_test == NULL)
		exit_with_errout("malloc failed");
	unit_test->name = test_name;
	unit_test->test_func = f;
	new_list = ft_lstnew(unit_test);
	if (new_list == NULL)
		exit_with_errout("malloc failed");
	ft_lstadd_back(test_list, new_list);
}
