/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:45:05 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/15 09:48:24 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	int	c;

	c = 'x';
	printf("%c\n", ft_tolower(c));
	return (0);
}
//*/
