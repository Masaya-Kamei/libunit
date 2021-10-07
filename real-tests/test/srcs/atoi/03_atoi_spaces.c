/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_atoi_spaces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:58:26 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 10:58:40 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "unit_atoi.h"

int	atoi_spaces(void)
{
	if (ft_atoi(" \t\n\r\v\f  42 \n ") == atoi(" \t\n\r\v\f  42 \n "))
		return (0);
	else
		return (-1);
}
