/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:08:09 by mkamei            #+#    #+#             */
/*   Updated: 2022/03/25 11:54:57 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdbool.h>

typedef int	(*t_test_func)(void);

typedef struct s_ut_list
{
	const char			*name;
	t_test_func			test_func;
	struct s_ut_list	*next;
}						t_ut_list;

void	load_unit_test(
			t_ut_list **test_list, const char *test_name, t_test_func f);
int		launch_unit_tests(t_ut_list **test_list, const char *test_title);
void	capture_stdout(void);
char	*get_captured_stdout(void);
void	put_header(void);
int		get_test_status(bool boolean);

#endif
