/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:57:50 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/06 19:11:02 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *tmp_dst;
	unsigned char *tmp_src;

	tmp_dst = (unsigned char*)dst;
	tmp_src = (unsigned char*)src;
	if (n == 0 || dst == src)
		return (dst);
	while (n > 0)
	{
		*tmp_dst = *tmp_src;
		n--;
		tmp_dst++;
		tmp_src++;
	}
	return (dst);
}
