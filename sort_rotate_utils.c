/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ratate_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 19:24:11 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/13 20:20:58 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	set_mid_location(int num, t_info *info)
{
	t_nums	*stack_a;
	int		i;

	stack_a = info->top_a;
	i = 1;
	while (stack_a->next)
	{
		if (num > stack_a->content && num < stack_a->next->content)
			break ;
		i++;
		stack_a = stack_a->next;
	}
	if (i >= (info->size_a + 1) / 2)
		i = (info->size_a - i) * -1;
	return (i);
}

int	set_max_location(t_info *info)
{
	int		max;
	int		i;
	int		temp;
	t_nums	*stack_a;

	i = 0;
	temp = 0;
	stack_a = info->top_a;
	max = get_max(stack_a);
	while (stack_a)
	{
		temp = stack_a->content;
		if (temp == max)
			break ;
		i++;
		stack_a = stack_a->next;
	}
	i++;
	if (i >= (info->size_a + 1) / 2)
		i = (info->size_a - i) * -1;
	return (i);
}

int	get_max(t_nums *stack)
{
	int	max;

	max = stack->content;
	while (stack)
	{
		if (max < stack->content)
			max = stack->content;
		stack = stack->next;
	}
	return (max);
}

int	set_min_location(t_info	*info)
{
	int		min;
	int		i;
	int		temp;
	t_nums	*stack_a;

	i = 0;
	temp = 0;
	stack_a = info->top_a;
	min = get_min(stack_a);
	while (stack_a)
	{
		temp = stack_a->content;
		if (temp == min)
			break ;
		i++;
		stack_a = stack_a->next;
	}
	if (i >= (info->size_a + 1) / 2)
		i = (info->size_a - i) * -1;
	return (i);
}

int	get_min(t_nums *stack)
{
	int	min;

	min = stack->content;
	while (stack)
	{
		if (min > stack->content)
			min = stack->content;
		stack = stack->next;
	}
	return (min);
}
