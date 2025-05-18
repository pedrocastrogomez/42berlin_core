/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:58:52 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/16 13:54:48 by pecastro         ###   ########.fr       */
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

static char	*ft_malloc(char const *s1, unsigned int start, unsigned int end)
{
	char			*ptr;
	unsigned int	i;

	ptr = malloc(sizeof(char) * (ft_strlen(s1) - start - end + 1));
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (i < (ft_strlen(s1) - start - end))
	{
		ptr[i] = s1[i + start];
		i ++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static int	ft_in_set(char const c, char const *set)
{
	unsigned int	count_trim;
	unsigned int	i;

	count_trim = 0;
	i = 0;
	while (set[i])
	{
		if (c == set[i])
		{
			return (1);
		}
		i ++;
	}
	return (0);
}

static unsigned int	ft_end_start(const char *s1, const char *set, int end_start)
{
	unsigned int	count;
	unsigned int	extreme;
	unsigned int	i;

	extreme = 0;
	if (end_start < 0)
	{
		i = 0;
	}
	else
	{
		i = ft_strlen(s1) - 1;
	}
	while (s1[i])
	{
		count = ft_in_set(s1[i], set);
		if (count == 0)
			break ;
		extreme = extreme + count;
		if (end_start < 0)
			i ++;
		else
			i --;
	}
	return (extreme);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	start_num;
	unsigned int	end_num;

	start_num = -1;
	end_num = 1;
	start = ft_end_start(s1, set, start_num);
	end = ft_end_start(s1, set, end_num);
	return (ft_malloc(s1, start, end));
}

#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	char const	*s1;
	char const	*set;
	char	*ptr;

	s1 = "saltamontes";
	set = "aes";
	ptr = ft_strtrim(s1, set);
	write(1, ptr, ft_strlen(ptr) + 1);
	write(1, "\n", 1);
	printf("%s\n", ptr);
	return (0);
}
//*/
