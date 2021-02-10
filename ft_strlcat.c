/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:16:50 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/06 21:13:39 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	total_len;
	int		dst_len;

	dst_len = ft_strlen(dst);
	total_len = 0;
	if (ft_strlen(dst) >= dstsize)
		total_len = ft_strlen((char*)src) + dstsize;
	else
		total_len = ft_strlen((char*)src) + ft_strlen(dst);
	while (*dst != '\0')
		dst++;
	while (*src != '\0' && (size_t)(dst_len + 1) < dstsize)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (total_len);
}
