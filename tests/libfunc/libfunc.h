/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfunc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:03:29 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/07 14:11:22 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFUNC_H
# define LIBFUNC_H

# include <unistd.h>

char	*ft_create_msg(int score);
int		ft_is_prime(int nb);
double	ft_div(int nbr1, int nbr2);
size_t	ft_strlen(const char *s);

#endif
