/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:51:42 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/06 18:54:53 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t bytes)
{
	char *tmp;
	char tmpsym;

	tmp = (char*)memptr;
	tmpsym = (unsigned char)val;
	if (bytes != 0)
	{
		while (bytes > 0)
		{
			*tmp = tmpsym;
			bytes--;
			tmp++;
		}
	}
	return (memptr);
}
