/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:44:03 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/13 20:38:46 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_rotate_min(t_info *info, int *a, int *b)
{
	int		location_a;
	int		location_b;
	int		i;
	t_nums	*stack_b;
	int		num;

	i = 0;
	stack_b = info->top_b;
	while (i < info->size_b)
	{
		num = stack_b->content;
		location_a = set_location(num, info);
		if (i >= (info->size_b + 1) / 2)
			location_b = (info->size_b - i) * -1;
		else
			location_b = i;
		if (i == 0 || ft_get_bigger(*a, *b, location_a, location_b))
		{
			*a = location_a;
			*b = location_b;
		}
		stack_b = stack_b->next;
		i++;
	}
}

void	ft_sort_big(t_info *info)
{
	int	location;

	location = set_min_location(info);
	while (location)
	{
		if (location > 0)
		{
			ra(info);
			location--;
		}
		else
		{
			rra(info);
			location++;
		}
	}
}

int	ft_get_bigger(int a, int b, int a_loc, int b_loc)
{
	if (a < 0)
		a = a * -1;
	if (b < 0)
		b = b * -1;
	if (a_loc < 0)
		a_loc = a_loc * -1;
	if (b_loc < 0)
		b_loc = b_loc * -1;
	if (a + b > a_loc + b_loc)
		return (1);
	else
		return (0);
}

void	ft_division(t_info *info)
{
	int	i;
	int	pivot1;
	int	pivot2;

	i = info->size_a / 3;
	pivot1 = info->arr[i];
	i = info->size_a * 2 / 3;
	pivot2 = info->arr[i];
	i = info->size_a;
	while (i)
	{
		if (info->top_a->content < pivot1)
		{
			pb(info);
			rb(info);
		}
		else if (info->top_a->content < pivot2)
			pb(info);
		else
			ra(info);
		i--;
	}
}
