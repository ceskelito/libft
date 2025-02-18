/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:33:59 by rceschel          #+#    #+#             */
/*   Updated: 2025/01/07 11:38:47 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define UP 'u'

void	ft_putnbr_hex(unsigned int nbr, const char hex_case)
{
	const char	*base;
	char		digit;

	base = "0123456789abcdef";
	if (hex_case == UP)
		base = "0123456789ABCDEF";
	if (nbr < 16)
	{
		digit = base[nbr];
		write(1, &digit, 1);
		return ;
	}
	digit = base[nbr % 16];
	ft_putnbr_hex(nbr / 16, hex_case);
	write(1, &digit, 1);
}
