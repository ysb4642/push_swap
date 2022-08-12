/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:27:45 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/09 18:23:56 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dest = (unsigned char *) dest;
	ptr_src = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		*ptr_dest = *ptr_src;
		if (*ptr_dest == (unsigned char)c)
			return (++ptr_dest);
		ptr_dest++;
		ptr_src++;
		i++;
	}
	return (NULL);
}
