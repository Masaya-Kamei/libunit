/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_atoi_int_min.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:00:08 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 11:00:18 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "unit_atoi.h"

int	atoi_int_min(void)
{
	if (ft_atoi("-2147483648") == atoi("-2147483648"))
		return (0);
	else
		return (-1);
}
