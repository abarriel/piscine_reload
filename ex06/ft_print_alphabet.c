/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:23:57 by abarriel          #+#    #+#             */
/*   Updated: 2016/11/02 14:42:09 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	a;
	int	c;

	c = 97;
	a = 0;
	while (a < 26)
	{
		ft_putchar(c);
		c++;
		a++;
	}
}
