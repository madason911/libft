/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljennife <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:52:45 by ljennife          #+#    #+#             */
/*   Updated: 2020/11/06 20:08:18 by ljennife         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long int	nb_l;
	char		arr[11];
	int			i;

	i = 0;
	nb_l = nb;
	if (nb_l == 0)
		write(fd, "0", 1);
	if (nb_l < 0)
	{
		write(fd, "-", 1);
		nb_l *= -1;
	}
	while (nb_l > 0)
	{
		arr[i] = (nb_l % 10) + 48;
		nb_l /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(fd, &arr[i], 1);
		i--;
	}
}
