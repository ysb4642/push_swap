/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <seyeo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:11:44 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/15 15:53:18 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		arr_size;
	int		*num_arr;
	t_info	*info;

	if (argc < 2)
		print_error(-1);
	arr_size = 0;
	info = init_info();
	arr_size = get_str_size(argc, argv);
	num_arr = argv_arr(argc, argv, arr_size);
	arr_stack(info, num_arr, arr_size);
	is_valid_param(num_arr, arr_size, 0);
	info->arr = (int *)num_arr;
	ft_sort(info);
	return (0);
}
