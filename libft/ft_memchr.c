/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 15:29:05 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/09 18:23:55 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*ptr_arr;
	unsigned char	find_c;
	size_t			i;

	ptr_arr = (unsigned char *) arr;
	find_c = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (*ptr_arr == find_c)
			return (ptr_arr);
		ptr_arr++;
		i++;
	}
	return (NULL);
}
