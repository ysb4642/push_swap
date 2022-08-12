/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:00:13 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/09 21:50:21 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_nums
{
	struct s_nums	*prev;
	struct s_nums	*next;
	int				content;
}	t_nums;

typedef struct s_info
{
	int				*arr;
	int				size_a;
	int				size_b;
	struct s_nums	*top_a;
	struct s_nums	*top_b;
	struct s_nums	*bottom_a;
	struct s_nums	*bottom_b;
}	t_info;

int		print_error(int fd);
int		is_valid_digit(const char *str);	
void	is_valid_param(int *arr, int size, int i);
int		get_spstr_size(char **str);
void	ft_free(char **str);
int		get_str_size(int argc, char *argv[]);
t_info	*init_info(void);
t_nums	*init_stack(void);
void	set_int_arr(int	*arr, int *arr_index, char **str);
int		*argv_arr(int argc, char *argv[], int size);
void	arr_stack(t_info *info, int *arr, int size);
#endif
