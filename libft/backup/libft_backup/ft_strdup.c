/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 09:15:07 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/16 09:57:31 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i ++;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;

	ptr = malloc(sizeof(char) * ft_strlen(s));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i ++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <unistd.h>
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char	*s;

	s = "very good";
	printf("%s\n", strdup(s));
	printf("%s\n", ft_strdup(s));
	write(1, ft_strdup(s), ft_strlen(s) + 1);
	write(1, "\n", 1);
	return (0);
}
//*/
