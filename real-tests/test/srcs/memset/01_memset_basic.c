/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_memset_basic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:07:15 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 13:08:33 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "unit_memset.h"

int	memset_basic(void)
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
