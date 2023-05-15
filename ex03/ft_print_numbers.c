/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:21:04 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/06 14:50:32 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{	
	char	num;

	num = 48;
	while (num < 58)
	{
		write (1, &num, 1);
		num++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	write (1, "\n", 1);
	return (0);
}
*/