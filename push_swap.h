/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:00:13 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/14 01:35:23 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

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

char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);
int		ft_isspace(char c);
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
void	sa(t_info *info);
void	sb(t_info *info);
void	ss(t_info *info);
void	pa(t_info *info);
void	pb(t_info *info);
void	ra(t_info *info);
void	rb(t_info *info);
void	rr(t_info *info);
void	rra(t_info *info);
void	rrb(t_info *info);
void	rrr(t_info *info);
void	ft_sort(t_info *info);
void	sort_size_3(t_info *info);
void	ft_division(t_info *info);
void	rotate_a(t_info *info, int a);
void	rotate_b(t_info *info, int b);
void	rotate_ab(t_info *info, int *a, int *b);
int		get_min(t_nums *stack);
int		set_min_location(t_info	*info);
int		get_max(t_nums *stack);
int		set_max_location(t_info *info);
int		set_mid_location(int num, t_info *info);
int		set_location(int num, t_info *info);
void	ft_sort_big(t_info *info);
int		ft_get_bigger(int a, int b, int a_loc, int b_loc);
void	get_rotate_min(t_info *info, int *a, int *b);
void	sort_big_size(t_info *info);

#endif
