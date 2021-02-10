/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:35:13 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/21 22:49:44 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int j;

	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0' && (size_t)i < len)
	{
		j = 0;
		if (needle[j] == haystack[i])
		{
			while (needle[j] == haystack[i + j] && (size_t)(i + j) < len &&
					needle[j] != '\0')
				j++;
		}
		if (needle[j] == '\0')
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
