/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:19:38 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/13 19:06:18 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i ++;
	}
	return (s);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s[6] = "hello";
	int	nbr = -2127483647;
	int	c = 90;
	size_t	n = 2;

	printf("%s\n", (char *)memset(s,c,n));
	printf("%i\n", *(int *)memset(&nbr,c,n));
	ft_memset(s, c, n);
	printf("%s\n", s);
	printf("%i\n", *(int *)ft_memset(&nbr, c, n));
	return (0);
}
//*/
