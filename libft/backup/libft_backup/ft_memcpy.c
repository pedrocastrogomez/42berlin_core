/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:53:21 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/14 10:11:13 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i ++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	int	src;
	int	src1;
	int	dest;
	int	dest1;
	char	srcs[9] = "aabbccdd";
	char	srcs1[9] = "aabbccdd";
	char	dests[11] = "eeffgghhii";
	char	dests1[11] = "eeffgghhii";
	size_t	n;

	src = -2147483647;
	src1 = -2147483647;
	dest = -10;
	dest1 = -10;
	n = 1;
	printf("%d\n", *(int *)ft_memcpy(&dest, &src, n));
	printf("%d\n", *(int *)memcpy(&dest1, &src1, n));

	n = 8;
        printf("%s\n", (char *)ft_memcpy(dests, srcs, n));
        printf("%s\n", (char *)memcpy(dests1, srcs1, n));
	return (0);
}
//*/
