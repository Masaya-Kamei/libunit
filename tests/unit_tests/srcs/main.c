/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:15:04 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 14:16:02 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

int	main(void)
{
	int		status;

	put_header();
	status = 0;
	status |= create_msg_launcher() == -1;
	status |= div_launcher() == -1;
	status |= is_prime_launcher() == -1;
	status |= strlen_launcher() == -1;
	return (status);
}
