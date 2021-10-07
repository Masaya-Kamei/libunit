/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:38:58 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 13:04:50 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

int	main(void)
{
	int		status;

	put_header();
	status = 0;
	status |= atoi_launcher() == -1;
	status |= bzero_launcher() == -1;
	status |= calloc_launcher() == -1;
	status |= isalnum_launcher() == -1;
	status |= memccpy_launcher() == -1;
	status |= memset_launcher() == -1;
	status |= strchr_launcher() == -1;
	system("leaks unit_test");
	return (status);
}
