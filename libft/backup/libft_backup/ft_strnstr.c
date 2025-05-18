/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:23:41 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/15 12:31:38 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i] && (i < len))
	{
		j = 0;
		while ((big[i] == little[j]) && (i < len))
		{
			i ++;
			j ++;
		}
		if (j == ft_strlen(little))
		{
			return (((char *)big) + (i - j));
		}
		i ++;
	}
	if ((big[i] == '\0') && (little[i] == '\0'))
	{
		return (&(((char *)big)[i]));
	}
	return (0);
}
/*
#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
int	main(void)
{
	const char	*big;
	const char	*little;
	size_t	len;

	big = "guayaba";
	little = "ayab";
	len = 6;
	printf("%s\n", strnstr(big, little, len));
	printf("%s\n", ft_strnstr(big, little, len));
	return (0);
}
//*/
