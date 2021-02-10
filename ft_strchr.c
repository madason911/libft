/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:13:43 by ljennife          #+#    #+#             */
/*   Updated: 2020/10/30 23:23:32 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (const char)c)
			return ((char*)s);
		s++;
	}
	if ((const char)c == '\0')
		return ((char*)s);
	return (NULL);
}
