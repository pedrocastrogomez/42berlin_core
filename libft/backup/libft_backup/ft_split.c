/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 13:56:53 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/17 10:48:53 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static size_t	ft_strlen(char const *s, char c, int index)
{
	size_t	i;

	i = 0;
	while (s[i + index] && s[i + index] != c)
	{
		i ++;
	}
	return (i);
}

static size_t	ft_wcount(char const *s, char c)
{
	int	i;
	int	wcount;

	wcount = 1;
	i = 0;
	while (s[i])
	{
		if (s[i + 1] == c)
		{
			wcount ++;
		}
		i ++;
	}
	return (wcount);
}

static int	*ft_index(const char *s, char c, size_t wcount)
{
	int	*index;
	int	i;
	int	j;

	index = malloc(sizeof(int) * wcount);
	if (index == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			index[j] = i + 1;
			j ++;
		}
		i ++;
	}
	return (index);
}

static char	*ft_malloc_word(const char *s, char c, int index)
{
	char	*ptr;
	size_t	i;

	ptr = malloc(sizeof(char) * (ft_strlen(s, c, index) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ft_strlen(s, c, index))
	{
		ptr[i] = s[i + index];
		i ++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	wcount;
	size_t	i;
	int		*index;

	if (!s || c == '\0')
	{
		return (NULL);
	}
	wcount = ft_wcount(s, c);
	ptr = malloc(sizeof(char *) * (wcount + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	index = ft_index(s, c, wcount);
	i = 0;
	while (i < wcount)
	{
		ptr[i] = ft_malloc_word(s, c, index[i]);
		i ++;
	}
	ptr[i] = (NULL);
	free(index);
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**arr;
	char const	*s;
	char	c;
	unsigned int	i;

	s = "hello how are you? you are my favorite person in the www";
	c = ' ';
	arr = ft_split(s, c);
	if (!arr)
	{
		return (1);
	}
	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i ++;
	}
	return 0;
}
//*/
