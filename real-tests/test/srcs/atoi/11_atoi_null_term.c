/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_atoi_null_term.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:01:42 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 11:01:51 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "unit_atoi.h"

int	atoi_null_term(void)
{
	if (ft_atoi("") == atoi(""))
		return (0);
	else
		return (-1);
}
