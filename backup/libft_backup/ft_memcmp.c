/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:12:47 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/14 12:35:43 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*y;	

	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (x[i] != y[i])
		{
			return (x[i] - y[i]);
		}
		i ++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[5] = "hello";
	char	s2[5] = "hella";
	int	nb1;
	int	nb2;
	size_t	n;

	n = 5;
	printf("%i\n", memcmp(s1, s2, n));
	printf("%i\n", ft_memcmp(s1, s2, n));

	nb1 = 2147;
	nb2 = 2199;	
	n = 1;
	printf("%i\n", memcmp(&nb1, &nb2, n));
        printf("%i\n", ft_memcmp(&nb1, &nb2, n));
}
//*/
