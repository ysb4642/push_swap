/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:24:43 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/09 21:51:29 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_nums	*init_stack(void)
{
	t_nums	*stack;

	stack = NULL;
	stack = (t_nums *)malloc(sizeof(t_nums));
	stack->content = 0;
	stack->prev = NULL;
	stack->next = NULL;
	return (stack);
}

t_info	*init_info(void)
{
	t_nums	*stack_a;
	t_info	*info;

	info = NULL;
	info = (t_info *)malloc(sizeof(t_info));
	stack_a = init_stack();
	info->arr = NULL;
	info->size_a = 0;
	info->top_a = stack_a;
	info->bottom_a = stack_a;
	info->size_b = 0;
	return (info);
}
