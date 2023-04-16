/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:49:13 by faaraujo          #+#    #+#             */
/*   Updated: 2023/04/16 15:59:58 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;
	int		len;

	len = ft_strlen(s);
	s_dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!(s_dup))
		return (NULL);
	while (*s)
		*s_dup++ = *s++;
	*s_dup = '\0';
	return (s_dup - len);
}
