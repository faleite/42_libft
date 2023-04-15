/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:39:30 by faaraujo          #+#    #+#             */
/*   Updated: 2023/04/15 18:50:33 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	if (!(*little))
		return ((char *)big);
	little_len = ft_strlen(little);
	i = 0;
	while (*big && (i < len))
	{
		if ((ft_strncmp(big, little, little_len) == 0)
			&& (i + little_len <= len))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
