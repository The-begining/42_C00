/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:31:19 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/11 14:20:57 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	store_num(long nbl)
{
	int		i;
	char	c[10];

	i = 0;
	if (nbl < 0)
	{
		nbl *= -1;
		while (nbl % 10)
		{
			c[i++] = (nbl % 10) + 48;
			nbl /= 10;
		}
		write (1, "-", 1);
	}
	else
	{
		while (nbl % 10)
		{
			c[i++] = (nbl % 10) + 48;
			nbl /= 10;
		}
	}
	while (--i >= 0)
		write (1, &c[i], 1);
}

void	ft_putnbr(int nb)
{
	long	nbl;

	nbl = nb;
	if (nbl == 0)
		write(1, "0", 1);
	store_num(nbl);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(6774328);
	write(1, "\n", 1);
	return (0);
}
