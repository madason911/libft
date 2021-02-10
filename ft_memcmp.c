/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 23:40:23 by ljennife          #+#    #+#             */
/*   Updated: 2020/10/30 00:03:19 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char*)s1 != *(unsigned char*)s2)
		{
			return ((*(unsigned char*)s1 - *(unsigned char*)s2));
		}
		n--;
		s1++;
		s2++;
	}
	return (0);
}
