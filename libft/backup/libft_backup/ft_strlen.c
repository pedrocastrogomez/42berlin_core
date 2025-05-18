/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:58:44 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/13 12:18:23 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i ++;
	}
	return (i);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	printf("%zu\n", strlen("bola"));
	printf("%zu\n", ft_strlen("bola"));
	return (0);
}
//*/
