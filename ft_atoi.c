/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:59:12 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/21 22:32:15 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int	ft_isspace(char str)
{
	if ((str == ' ') || (str == '\t') || (str == '\n'))
	{
		return (1);
	}
	else if ((str == '\v') || (str == '\f') || (str == '\r'))
	{
		return (1);
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	long	int atoi;
	int			flag;

	atoi = 0;
	flag = 1;
	while (ft_isspace(*str) == 1)
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			flag = -1;
		str++;
	}
	while ((*str >= 48) && (*str <= 57))
	{
		atoi = atoi * 10 + (*str - 48);
		str++;
	}
	return ((int)(atoi * flag));
}
