/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:45:38 by abarriel          #+#    #+#             */
/*   Updated: 2016/11/02 14:45:43 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	a;
	int	c;

	c = 48;
	a = 0;
	while (a < 10)
	{
		ft_putchar(c);
		c++;
		a++;
	}
}
