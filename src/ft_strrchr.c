/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 10:21:29 by faaraujo          #+#    #+#             */
/*   Updated: 2023/04/15 17:37:28 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s_last;

	s_last = s;
	if (c > 127)
		c %= 256;
	while (*s_last)
		s_last++;
	while (s_last != s)
	{
		if (*s_last == c)
			return ((char *)s_last);
		s_last--;
	}
	if (*s_last == c)
		return ((char *)s_last);
	return (NULL);
}
