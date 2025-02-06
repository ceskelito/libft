/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:10:55 by rceschel          #+#    #+#             */
/*   Updated: 2024/12/12 14:11:02 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_buffer;
	const unsigned char	*src_buffer;

	dest_buffer = (unsigned char *)dest;
	src_buffer = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_buffer[i] = src_buffer[i];
		i++;
	}
	return (dest);
}
