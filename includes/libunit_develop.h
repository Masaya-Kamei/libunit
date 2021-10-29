/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_develop.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:52:48 by mkamei            #+#    #+#             */
/*   Updated: 2021/10/20 17:32:54 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_DEVELOP_H
# define LIBUNIT_DEVELOP_H

# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <signal.h>
# include <unistd.h>
# include "libunit.h"

# define TIMEOUT 2
# define GREEN "\e[38;2;80;255;80m"
# define RED "\e[38;2;255;40;40m"
# define RESET "\e[0m"

void		exit_with_errout(char *s);
t_ut_list	*ut_lstnew(const char *test_name, t_test_func test_func);
void		ut_lstadd_back(t_ut_list **lst, t_ut_list *new);
int			ut_lstsize(t_ut_list *lst);
void		ut_lstclear(t_ut_list **lst);

#endif
