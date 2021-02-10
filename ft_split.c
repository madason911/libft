/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:13:33 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/21 22:52:29 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**free_mem(char **split_str)
{
	int i;

	i = 0;
	while (split_str[i] != '\0')
	{
		free(split_str[i]);
		i++;
	}
	free(split_str);
	return (NULL);
}

static	int		count_words(char const *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != c)
			{
				i++;
				if (s[i] == '\0')
					return (j);
			}
			continue ;
		}
		i++;
	}
	return (j);
}

static	int		len_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**split_mas;

	if (!s)
		return (NULL);
	split_mas = malloc(sizeof(char*) * (count_words(s, c) + 1));
	if (split_mas == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < count_words(s, c))
	{
		while (s[j] == c)
			j++;
		split_mas[i] = malloc(sizeof(char) * (len_word(&s[j], c) + 1));
		if (split_mas[i] == NULL)
			return (free_mem(split_mas));
		ft_strlcpy(split_mas[i], &s[j], len_word(&s[j], c) + 1);
		j += len_word(&s[j], c);
		i++;
	}
	split_mas[i] = NULL;
	return (split_mas);
}
