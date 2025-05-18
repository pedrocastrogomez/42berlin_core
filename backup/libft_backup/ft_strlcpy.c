/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:48:01 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/14 13:19:00 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		if (i < size)
		{
			dst[i] = src[i];
		}
		i ++;
	}
	dst[i] = '\0';
	return (i);
}
/*
#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	dst[11];
	const char src[11] = "guantanamo";
	size_t	size;

	size = 4;
	printf("%zu\n", strlcpy(dst, src, size));
	printf("%zu\n", ft_strlcpy(dst, src, size));
}
//*/
