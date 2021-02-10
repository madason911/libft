/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:53:56 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/06 21:21:35 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	char	*ptr;
	int		len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1;
	strjoin = malloc(sizeof(char) * len);
	if (strjoin == NULL)
		return (NULL);
	ptr = strjoin;
	while (*s1 != '\0')
	{
		*strjoin = *s1;
		strjoin++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*strjoin = *s2;
		strjoin++;
		s2++;
	}
	*strjoin = '\0';
	return (ptr);
}
