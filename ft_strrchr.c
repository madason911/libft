/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:24:01 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/14 21:51:08 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((const char)c == '\0')
		return ((char*)&s[i]);
	i--;
	while (i >= 0)
	{
		if (s[i] == (const char)c)
			return ((char*)&s[i]);
		i--;
	}
	return (NULL);
}
