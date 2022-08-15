/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:20:46 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/14 01:37:30 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_size(t_info *info)
{
	int	a;
	int	b;

	ft_division(info);
	while (info->size_a > 3)
		pb(info);
	if (info->size_a == 2)
	{
		if (info->top_a->content > info->top_a->next->content)
			sa(info);
	}
	if (info->size_a == 3)
		sort_size_3(info);
	while (info->size_b)
	{
		a = 0;
		b = 0;
		get_rotate_min(info, &a, &b);
		rotate_ab(info, &a, &b);
		rotate_a(info, a);
		rotate_b(info, b);
		pa(info);
	}
	ft_sort_big(info);
}

void	sort_size_3(t_info *info)
{
	int	top;
	int	mid;
	int	bottom;

	top = info->top_a->content;
	mid = info->top_a->next->content;
	bottom = info->top_a->next->next->content;
	if (top > mid && mid > bottom && top > bottom)
	{
		sa(info);
		rra(info);
	}
	else if (top > mid && bottom > mid && top > bottom)
		ra(info);
	else if (mid > top && mid > bottom && bottom > top)
	{
		sa(info);
		ra(info);
	}
	else if (top > mid && bottom > mid && bottom > top)
		sa(info);
	else if (mid > top && mid > bottom && top > bottom)
		rra(info);
}

void	ft_sort(t_info *info)
{
	if (info->size_a == 2)
	{
		if (info->top_a->content > info->top_a->next->content)
			sa(info);
	}
	else if (info->size_a == 3)
		sort_size_3(info);
	else if (info->size_a > 3)
		sort_big_size(info);
}
