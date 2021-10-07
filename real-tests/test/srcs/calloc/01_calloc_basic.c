/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_calloc_basic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:15:31 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 11:15:40 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "unit_calloc.h"

int	calloc_basic(void)
{
	char	*s1;
	char	*s2;

	s1 = ft_calloc(100, sizeof(char));
	s2 = calloc(100, sizeof(char));
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
