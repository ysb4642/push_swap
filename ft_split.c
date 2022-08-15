/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyeo <seyeo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:08:01 by seyeo             #+#    #+#             */
/*   Updated: 2022/08/15 15:13:15 by seyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	remove_mem(char **result, int j)
{
	int	i;

	i = 0;
	while (i <= j)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

void	ft_do_split(char **result, char const *s, char c)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			result[j] = (char *)malloc(sizeof(char) * (i - word + 1));
			if (!result[j])
			{
				remove_mem(result, j);
				return ;
			}
			ft_strlcpy(result[j], &s[word], i - word + 1);
			j++;
		}
		else
			i++;
	}
}

int	ft_word_count(char const *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word_count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_num;

	if (s == NULL)
		return (NULL);
	word_num = ft_word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (word_num + 1));
	if (result == NULL)
		return (NULL);
	result[word_num] = NULL;
	if (word_num == 0)
		return (result);
	ft_do_split(result, s, c);
	return (result);
}
