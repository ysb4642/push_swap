/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:53:35 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/13 17:59:40 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_info *info)
{
	t_nums	*temp;

	if (info->size_a < 2 || info->size_a < 2)
		return ;
	temp = info->bottom_a;
	info->bottom_a = info->bottom_a->prev;
	info->bottom_a->next = NULL;
	info->top_a->prev = temp;
	temp->next = info->top_a;
	info->top_a = temp;
	info->top_a->prev = NULL;
	temp = info->bottom_b;
	info->bottom_b = info->bottom_b->prev;
	info->bottom_b->next = NULL;
	info->top_b->prev = temp;
	temp->next = info->top_b;
	info->top_b = temp;
	info->top_b->prev = NULL;
	write(1, "rrr\n", 4);
}

void	rrb(t_info *info)
{
	t_nums	*temp;

	if (info->size_b < 2)
		return ;
	temp = info->bottom_b;
	info->bottom_b = info->bottom_b->prev;
	info->bottom_b->next = NULL;
	info->top_b->prev = temp;
	temp->next = info->top_b;
	info->top_b = temp;
	info->top_b->prev = NULL;
	write(1, "rrb\n", 4);
}

void	rra(t_info *info)
{
	t_nums	*temp;

	if (info->size_a < 2)
		return ;
	temp = info->bottom_a;
	info->bottom_a = info->bottom_a->prev;
	info->bottom_a->next = NULL;
	info->top_a->prev = temp;
	temp->next = info->top_a;
	info->top_a = temp;
	info->top_a->prev = NULL;
	write(1, "rra\n", 4);
}
