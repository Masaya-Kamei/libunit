/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_atoi_zero_zero.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:01:23 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 11:01:32 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "unit_atoi.h"

int	atoi_zero_zero(void)
{
	if (ft_atoi("0.0") == atoi("0.0"))
		return (0);
	else
		return (-1);
}
