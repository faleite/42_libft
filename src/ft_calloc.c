/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:30:59 by faaraujo          #+#    #+#             */
/*   Updated: 2023/04/21 20:23:44 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nthings, size_t size)
{
	size_t	t_size;
	size_t	*ptr;

	t_size = nthings * size;
	ptr = (size_t *)malloc(t_size);
	if (!(ptr))
		return (NULL);
	ft_memset(ptr, 0, t_size);
	return ((void *)ptr);
}
