/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:48:53 by faaraujo          #+#    #+#             */
/*   Updated: 2023/04/19 22:04:04 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (dst == NULL && src == NULL)
		return (NULL);
	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dst;
	while (len--)
		*s2++ = *s1++;
	return (dst);
}
