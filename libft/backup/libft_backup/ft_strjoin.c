/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:33:33 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/16 10:58:30 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i ++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i ++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i + j] = s2[j];
		j ++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	char const	*s1;
	char const	*s2;

	s1 = "meaning";
	s2 = "full";
	printf("%s\n", ft_strjoin(s1, s2));
	write(1, ft_strjoin(s1, s2), ft_strlen(s1) + ft_strlen(s2) + 1);
	write(1, "\n", 1);
	return (0);
}
//*/
