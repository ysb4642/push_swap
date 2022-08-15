/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_sspa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:25:32 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/13 17:39:10 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_info *info)
{
	t_nums	*temp;

	if (info->size_a < 1)
		return ;
	temp = info->top_a;
	if (info->size_a > 1)
	{
		info->top_a = info->top_a->next;
		info->top_a->prev = NULL;
	}
	if (info->size_b == 0)
	{
		temp->next = NULL;
		info->top_b = temp;
		info->bottom_b = temp;
	}
	else
	{
		temp->next = info->top_b;
		info->top_b->prev = temp;
		info->top_b = temp;
	}
	info->size_a--;
	info->size_b++;
	write(1, "pb\n", 3);
}

void	pa(t_info *info)
{
	t_nums	*temp;

	if (info->size_b < 1)
		return ;
	temp = info->top_b;
	if (info->size_b > 1)
	{
		info->top_b = info->top_b->next;
		info->top_b->prev = NULL;
	}
	if (info->size_a == 0)
	{
		temp->next = NULL;
		info->top_a = temp;
		info->bottom_a = temp;
	}
	else
	{
		temp->next = info->top_a;
		info->top_a->prev = temp;
		info->top_a = temp;
	}
	info->size_a++;
	info->size_b--;
	write(1, "pa\n", 3);
}

void	ss(t_info *info)
{
	int	temp;

	if (info->size_a < 2)
		return ;
	if (info->size_b < 2)
		return ;
	temp = info->top_a->content;
	info->top_a->content = info->top_a->next->content;
	info->top_a->next->content = temp;
	temp = info->top_b->content;
	info->top_b->content = info->top_b->next->content;
	info->top_b->next->content = temp;
	write(1, "ss\n", 3);
}

void	sb(t_info *info)
{
	int	temp;

	if (info->size_b < 2)
		return ;
	temp = info->top_b->content;
	info->top_b->content = info->top_b->next->content;
	info->top_b->next->content = temp;
	write(1, "sb\n", 3);
}

void	sa(t_info *info)
{
	int	temp;

	if (info->size_a < 2)
		return ;
	temp = info->top_a->content;
	info->top_a->content = info->top_a->next->content;
	info->top_a->next->content = temp;
	write(1, "sa\n", 3);
}
