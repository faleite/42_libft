/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:06:56 by faaraujo          #+#    #+#             */
/*   Updated: 2023/04/22 20:40:39 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int	i;
	int	t;
	char	*str;
	unsigned int	nb;

	str = (char *)malloc(sizeof(char) * 2);
	if (!(str))
		return (NULL);
	i = 0;
	while (t--)
	{
		if (nb < 10)
			str[i] = nb + '0';
			i++;
	}
	return (str);
}

int	main(void)
{
	char	*str;

	str = ft_itoa(1);
	printf("%s\n", str);
	return (0);
}