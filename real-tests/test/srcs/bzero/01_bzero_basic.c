/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_bzero_basic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:13:35 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/06 20:02:47 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "unit_bzero.h"

int	bzero_basic(void)
{
	char	s1[100];
	char	s2[100];

	ft_bzero(s1, 100);
	bzero(s2, 100);
	if (strcmp(s1, s2) == 0)
		return (0);
	else
		return (-1);
}
