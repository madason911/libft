/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:21:08 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/13 21:21:12 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strcpy(char *dest, const char *src)
{
	char *temp;

	temp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}

char			*ft_strdup(const char *src)
{
	char *dest;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (NULL == dest)
		return (NULL);
	return (ft_strcpy(dest, src));
}
