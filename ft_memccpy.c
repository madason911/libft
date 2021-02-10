/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:44:25 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/06 19:11:06 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char*)dst;
	tmp_src = (unsigned char*)src;
	while (n > 0)
	{
		*tmp_dst = *tmp_src;
		if (*tmp_src == (unsigned char)c)
		{
			tmp_dst++;
			return ((void*)tmp_dst);
		}
		tmp_dst++;
		tmp_src++;
		n--;
	}
	return (NULL);
}
