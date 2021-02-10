/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:46:25 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/21 22:51:57 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nb_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		nb_len;
	int		len;

	nb_len = ft_nb_len(n);
	len = nb_len;
	str = malloc(sizeof(char) * (nb_len + 1));
	if (NULL == str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	while (nb_len > 0)
	{
		if (n < 0)
			str[nb_len - 1] = -(n % 10) + 48;
		else
			str[nb_len - 1] = n % 10 + 48;
		n /= 10;
		if (n == 0)
			break ;
		nb_len--;
	}
	str[len] = '\0';
	return (str);
}
