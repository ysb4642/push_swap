/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <responsible@kakao.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:44:55 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/09 18:23:58 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*ptr_dest;
	unsigned char	trans_c;
	size_t			i;

	ptr_dest = dest;
	trans_c = c;
	i = 0;
	while (i < len)
	{
		*ptr_dest = trans_c;
		ptr_dest++;
		i++;
	}
	return (dest);
}
