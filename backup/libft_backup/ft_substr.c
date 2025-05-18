/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:11:55 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/16 10:33:11 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] && (i < len))
	{
		ptr[i] = s[i + start];
		i ++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	const char	*s;
	unsigned int	start;
	size_t	len;

	s = "rotulador";
	start = 2;
	len = 4;
	printf("printf is %s\n", ft_substr(s, start, len));
	write(1, ft_substr(s, start, len), len + 5);
	write(1, "\n", 1);
	return (0);
}
//*/
