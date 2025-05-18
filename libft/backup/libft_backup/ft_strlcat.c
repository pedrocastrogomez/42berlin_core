/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:20:36 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/14 14:43:52 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i])
	{
		i ++;
	}
	j = 0;
	while (src[j] && j < size)
	{
		dst[i + j] = src[j];
		j ++;
	}
	if (j >= size)
	{
		dst[i + j] = '\0';
	}
	return (i + j);
}
/*
#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	dst[19] = "bacteria";
	const char src[11] = "guantanamo";
	size_t	size;

	size = 3;
	printf("%zu\n", strlcat(dst, src, size));
	printf("%zu\n", ft_strlcat(dst, src, size));
}
//*/
