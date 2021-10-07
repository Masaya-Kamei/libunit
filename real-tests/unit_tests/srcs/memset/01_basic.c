/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:07:15 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 13:58:29 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "memset_test.h"

int	memset_basic_test(void)
{
	char	s1[100];
	char	s2[100];

	ft_memset(s1, 'a', 50);
	memset(s2, 'a', 50);
	if (strcmp(s1, s2) == 0)
		return (0);
	else
		return (-1);
}
