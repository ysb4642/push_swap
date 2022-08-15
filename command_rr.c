/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:39:39 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/13 19:43:22 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_info *info)
{
	t_nums	*temp;

	if (info->size_a < 2 || info->size_a < 2)
		return ;
	temp = info->top_a;
	info->top_a = info->top_a->next;
	info->top_a->prev = NULL;
	info->bottom_a->next = temp;
	temp->prev = info->bottom_a;
	info->bottom_a = temp;
	info->bottom_a->next = NULL;
	temp = info->top_b;
	info->top_b = info->top_b->next;
	info->top_b->prev = NULL;
	info->bottom_b->next = temp;
	temp->prev = info->bottom_b;
	info->bottom_b = temp;
	info->bottom_b->next = NULL;
	write(1, "rr\n", 3);
}

void	rb(t_info *info)
{
	t_nums	*temp;

	if (info->size_b < 2)
		return ;
	temp = info->top_b;
	info->top_b = info->top_b->next;
	info->top_b->prev = NULL;
	info->bottom_b->next = temp;
	temp->prev = info->bottom_b;
	info->bottom_b = temp;
	info->bottom_b->next = NULL;
	write(1, "rb\n", 3);
}

void	ra(t_info *info)
{
	t_nums	*temp;

	if (info->size_a < 2)
		return ;
	temp = info->top_a;
	info->top_a = info->top_a->next;
	info->top_a->prev = NULL;
	info->bottom_a->next = temp;
	temp->prev = info->bottom_a;
	info->bottom_a = temp;
	info->bottom_a->next = NULL;
	write(1, "ra\n", 3);
}
