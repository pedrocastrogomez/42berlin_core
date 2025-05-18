/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:03:50 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/16 09:14:49 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	unsigned int	i;

	if (nmemb == 0 || size == 0)
	{
		return (malloc(0));
	}
	if ((nmemb * size) > 2147483647)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (nmemb * size))
	{
		((unsigned char *)ptr)[i] = 0;
		i ++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	size_t	nmemb;
	size_t	size;
	char	*arr;

	nmemb = 3;
	size = 5;
	arr = (char *)calloc(nmemb, size);
	size_t i = 0;
	while (i < (nmemb * size))
	{
		printf("%i", arr[i]);
		i ++;
	}
	printf("\n");
	printf("calloc returns:%s\n", (char *)calloc(nmemb, size));
	printf("size of calloc:%lu\n", sizeof(calloc(nmemb, size)));
	printf("ft_calloc returns:%s\n", (char *)ft_calloc(nmemb, size));
	printf("size of ft_calloc:%lu\n", sizeof(ft_calloc(nmemb, size)));
}
//*/
