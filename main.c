/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:11:44 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/09 21:51:30 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	print_error(int fd)
{
	if (fd > 0)
		write(2, "Error\n", 6);
	exit(1);
	return (-1);
}

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
	// 여기서부터해야함
}
