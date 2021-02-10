/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:18:13 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/06 21:36:38 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*strcp;

	if (s1 == NULL)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i > 0)
		i--;
	strcp = malloc(sizeof(char) * (i + 2));
	if (strcp == NULL)
		return (NULL);
	j = 0;
	while (i + 1 > 0)
	{
		strcp[j] = *s1;
		s1++;
		j++;
		i--;
	}
	strcp[j] = '\0';
	return (strcp);
}
