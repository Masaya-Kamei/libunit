/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:33:28 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/20 17:31:54 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libunit_develop.h"

void	load_unit_test(
			t_ut_list **test_list, const char *test_name, t_test_func test_func)
{
	t_ut_list	*new_list;

	new_list = ut_lstnew(test_name, test_func);
	if (new_list == NULL)
		exit_with_errout("malloc failed");
	ut_lstadd_back(test_list, new_list);
}
