/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:08:09 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/06 12:36:05 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <signal.h>
# include <unistd.h>

# define TIMEOUT 2
# define GREEN "\e[38;2;80;255;80m"
# define RED "\e[38;2;255;40;40m"
# define RESET "\e[0m"

typedef int	(*t_test_func)(void);

typedef struct s_unit_test
{
	t_test_func		test_func;
	char			*name;
}					t_unit_test;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	load_unit_test(t_list **test_list, char *test_name, t_test_func f);
int		launch_unit_tests(t_list **test_list, char *test_title);
void	put_header(void);

#endif
