/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_big.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:18:55 by mkamei            #+#    #+#             */
/*   Updated: 2022/03/25 12:28:05 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"
#include "putendl_fd_test.h"

int	putendl_fd_big_test(void)
{
	char	*str;
	int		i;

	capture_stdout();
	i = 0;
	while (i < 500)
	{
		ft_putendl_fd("123456789", STDOUT_FILENO);
		i++;
	}
	str = get_captured_stdout();
	if (strlen(str) == 5000)
	{
		free(str);
		return (0);
	}
	else
	{
		free(str);
		return (-1);
	}
}
