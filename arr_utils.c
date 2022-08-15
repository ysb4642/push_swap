/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:37:01 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/14 01:29:55 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
	str = NULL;
}

int	get_spstr_size(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	is_valid_param(int *arr, int size, int i)
{
	int	j;
	int	cnt;
	int	tmp;

	cnt = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				cnt++;
			}
			j++;
		}
		if (arr[i] == arr[i + 1])
			print_error(1);
		i++;
	}
	if (cnt == 0)
		print_error(-1);
}

int	is_valid_digit(const char *str)
{
	long long	res;
	int			sign;
	int			cnt;

	res = 0;
	sign = 1;
	cnt = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
		cnt++;
	}
	res = res * sign;
	if (*str != '\0' || cnt > 10
		|| res > 2147483647 || res < -2147483648)
		print_error(1);
	return ((int)res);
}
