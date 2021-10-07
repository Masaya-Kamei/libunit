/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:25:44 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 14:26:03 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "is_prime_test.h"

int	is_prime_basic_test(void)
{
	if (ft_is_prime(13) == 1)
		return (0);
	else
		return (-1);
}
