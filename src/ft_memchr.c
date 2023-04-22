/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:05:55 by faaraujo          #+#    #+#             */
/*   Updated: 2023/04/22 15:25:30 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned char	*s_cpy;
	unsigned char	c_cpy;

	s_cpy = (unsigned char *)s;
	c_cpy = (unsigned char)c;
	while (len--)
	{
		if (*s_cpy == c_cpy)
			return (s_cpy);
		s_cpy++;
	}
	return (NULL);
}
