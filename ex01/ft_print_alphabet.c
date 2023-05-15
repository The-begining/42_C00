/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 09:29:42 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/08 00:10:46 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	a;

	a = 97;
	while (a <= 122)
	{
		write (1, &a, 1);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/