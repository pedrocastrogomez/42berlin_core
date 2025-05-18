/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:51:45 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/15 10:46:50 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (((char *)s) + i);
		}
		i ++;
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
#include <unistd.h>
int	main(void)
{
	const char	*s;
	int	c;

	s = "confundido";
	c = '0';
	printf("%s\n", strchr(s, c));
	printf("%s\n", ft_strchr(s, c));
	return (0);
}
//*/
