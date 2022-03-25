/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:06:46 by mkamei            #+#    #+#             */
/*   Updated: 2022/03/25 12:38:18 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfunc.h"
#include <string.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, strlen(s));
	write(fd, "\n", 1);
}
