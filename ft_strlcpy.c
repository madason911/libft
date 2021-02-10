/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:37:17 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/06 21:13:12 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len;

	len = 0;
	if (dst == NULL || src == NULL)
		return (0);
	while (src[len] != '\0')
		len++;
	if (dstsize <= 0)
		return (len);
	while (*src != '\0' && (dstsize - 1) > 0)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (len);
}
