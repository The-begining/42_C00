/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 00:18:20 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/11 14:09:32 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(int n)
{
	char	c;

	if (n < 10)
	{
		c = n + 48;
		write (1, "0", 1);
		write (1, &c, 1);
		return ;
	}
	c = (n / 10) + 48;
	write(1, &c, 1);
	c = n % 10 + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num_1;
	int	num_2;

	num_1 = 0;
	while (num_1 < 99)
	{
		num_2 = num_1 + 1;
		while (num_2 < 100)
		{
			write_num(num_1);
			write (1, " ", 1);
			write_num(num_2);
			if (num_1 == 98 && num_2 == 99)
				return ;
			else
				write(1, ", ", 2);
			num_2++;
		}	
		num_1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
