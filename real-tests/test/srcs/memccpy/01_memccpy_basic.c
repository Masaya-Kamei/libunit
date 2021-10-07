/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_memccpy_basic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:48:54 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 11:52:12 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "unit_memccpy.h"

int	memccpy_basic(void)
{
	char	*s;
	char	*s1;
	char	*s2;

	s = "42tokyo";
	s1 = calloc(strlen(s), sizeof(char));
	s2 = calloc(strlen(s), sizeof(char));
	ft_memccpy(s1, s, 0, 3);
	memccpy(s2, s, 0, 3);
	if (strcmp(s1, s2) == 0)
	{
		free(s1);
		free(s2);
		return (0);
	}
	else
	{
		free(s1);
		free(s2);
		return (-1);
	}
}
