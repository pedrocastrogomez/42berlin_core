/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:32:34 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/15 13:02:08 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				sign;
	int				result;

	sign = 1;
	i = 0;
	if (nptr[i] == '-')
	{
		sign = -sign;
		i ++;
	}
	if (!(nptr[i] >= '0' && nptr[i] <= '9'))
	{
		return (0);
	}
	result = 0;
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		result = ((result * 10) + (nptr[i] - '0'));
		i ++;
	}
	return (result * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	const char	*nptr;

	nptr = "-123";
	printf("%i\n", atoi(nptr));
	printf("%i\n", ft_atoi(nptr));
	return (0);
}
//*/
