/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:11:38 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/15 11:23:08 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (((char *)s1)[i] - ((char *)s2)[i]);
		}
		i ++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*s1;
	char	*s2;
	size_t	n;

	s1 = "maraca";
	s2 = "maracba";
	n = 6;
	printf("%i\n", strncmp(s1, s2, n));
	printf("%i\n", ft_strncmp(s1, s2, n));
	return (0);
}
//*/
