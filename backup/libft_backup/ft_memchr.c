/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:28:44 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/14 12:11:04 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((void *)((unsigned char *)s + i));
		}
		i ++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[5] = "caldo";
	int	nbr;
	int	c; 
	int	c1;
	size_t	n;

	nbr = 2147483647;
	c = 'l';
	n = 4;
	printf("%s\n", (char *)memchr(str, c, n));
	printf("%s\n", (char *)ft_memchr(str, c, n));
	c1 = 127;
	printf("%p\n", memchr(&nbr, c1, n));
	printf("%p\n", ft_memchr(&nbr, c1, n));
}
//*/
