/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:04:40 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/13 19:23:23 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i ++;
	}
}
/*
#include <strings.h>
#include <stdio.h>
int	main(void)
{
	char	s[5] = "hello";
	int	nbr = 2147483647;
	char	s1[5] = "hello";
	int	nbr1 = 2147483647;
	size_t	n = 2;

	bzero(s1, n);
	int i = 0;
	while (i < 5)
	{
		printf("%c\n", s1[i]);
		i ++;
	}
	bzero(&nbr, n);
	printf("%i\n", nbr);
	ft_bzero(s, n);
	i = 0;
        while (i < 5)
        {
                printf("%c\n", s[i]);
                i ++;
        }
	ft_bzero(&nbr1, n);
	printf("%i\n", nbr1);

}
//*/
