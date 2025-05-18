/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:47:28 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/15 11:04:44 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j = i;
		}
		i ++;
	}
	if (j > 0)
	{
		return (((char *)s) + j);
	}
	if (c == '\0')
	{
		return (((char *)s) + i);
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char	*s;
	int	c;

	s = "nixtamalizar";
	c = 'i';
	printf("%s\n", strrchr(s, c));
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}
//*/
