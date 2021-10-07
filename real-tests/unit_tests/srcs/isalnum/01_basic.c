/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:32:49 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 13:55:43 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "isalnum_test.h"

int	isalnum_basic_test(void)
{
	if (!ft_isalnum('a') == !isalnum('a'))
		return (0);
	else
		return (-1);
}
