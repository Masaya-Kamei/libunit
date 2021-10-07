/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strchr_basic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:10:18 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 13:10:38 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "unit_strchr.h"

int	strchr_basic(void)
{
	const char	*s = "42tokyo";

	if (ft_strchr(s, 'o') == strchr(s, 'o'))
		return (0);
	else
		return (-1);
}
