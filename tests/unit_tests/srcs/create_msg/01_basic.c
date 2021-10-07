/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:18:55 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 14:19:10 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "create_msg_test.h"

int	create_msg_basic_test(void)
{
	if (strcmp(ft_create_msg(3), "score :3/5") == 0)
		return (0);
	else
		return (-1);
}
