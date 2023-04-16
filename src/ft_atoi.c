/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:19:23 by faaraujo          #+#    #+#             */
/*   Updated: 2023/04/16 17:50:20 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *ptr)
{
	int	i;
	int	pn;

	i = 0;
	pn = 0;
	while ((ptr[i] >= 9 && ptr[i] <= 13) || ptr[i] == 32)
		i++;
	if (ft_isalpha(ptr[i]) == 1) 
		return (0);
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ft_isdigit(ptr[i + 1] == 1))
		{
			if (ptr[i] == '-')
				pn = -1;
		}
		else
			return (0);
		i++;
	}
/* 	while (ft_isdigit(ptr[i]) == 1)
	{

	} */
        return (1);        
}

int	ft_isdigit(int c);
int	ft_isalpha(int c);

int     main(void)
{
	const char *str = "   -12345648901ahe522";
	int	num;

	num = ft_atoi(str);
	printf("%d", num);
        return (0);
}