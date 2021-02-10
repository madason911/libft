/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:37:27 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/14 21:50:22 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp_dst;
	unsigned char *tmp_src;

	tmp_dst = (unsigned char*)dst;
	tmp_src = (unsigned char*)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src && len > 0)
	{
		tmp_dst = tmp_dst + (len - 1);
		tmp_src = tmp_src + (len - 1);
		while (len-- > 0)
		{
			*tmp_dst-- = *tmp_src--;
		}
	}
	else
	{
		while (len > 0)
		{
			*tmp_dst++ = *tmp_src++;
			len--;
		}
	}
	return (dst);
}
