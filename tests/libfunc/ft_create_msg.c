/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_msg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:04:55 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 14:11:01 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfunc.h"

char	*ft_create_msg(int score)
{
	char	*str;

	str = "score :1/5";
	str[7] = score + 48;
	return (str);
}