/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <seyeo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:08:49 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/15 15:11:42 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arr_stack(t_info *info, int *arr, int size)
{
	t_nums	*node;
	int		i;

	i = 0;
	while (i < size)
	{
		node = init_stack();
		info->size_a += 1;
		info->bottom_a->content = (int)arr[i];
		info->bottom_a->next = node;
		node->prev = info->bottom_a;
		info->bottom_a = node;
		i++;
	}
	info->bottom_a = info->bottom_a->prev;
	free(node);
	node = NULL;
}

void	set_int_arr(int	*arr, int *arr_index, char **str)
{
	int	tmp;
	int	i;

	i = 0;
	while (str[i])
	{
		tmp = is_valid_digit(str[i]);
		arr[*arr_index] = tmp;
		(*arr_index)++;
		i++;
	}
}

int	*argv_arr(int argc, char *argv[], int size)
{
	int		i;
	int		arr_index;
	int		*arr;
	char	**spstr;

	i = 1;
	arr_index = 0;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		print_error(1);
	while (i < argc)
	{
		spstr = ft_split(argv[i], ' ');
		set_int_arr(arr, &arr_index, spstr);
		ft_free(spstr);
		i++;
	}
	arr[arr_index] = '\0';
	return (arr);
}

int	get_str_size(int argc, char *argv[])
{
	int		i;
	int		size;
	int		cnt;
	char	**spstr;

	i = 0;
	size = 0;
	while (i < argc)
	{
		cnt = 0;
		while (argv[i][cnt])
		{
			if (!ft_isspace(argv[i][cnt]))
				break ;
			cnt++;
		}
		if (argv[i][cnt] == '\0')
			print_error(1);
		spstr = ft_split(argv[i], ' ');
		size += get_spstr_size(spstr);
		ft_free(spstr);
		i++;
	}
	return (size - 1);
}
