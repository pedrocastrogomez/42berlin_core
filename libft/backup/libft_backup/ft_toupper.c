/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:38:30 by pecastro          #+#    #+#             */
/*   Updated: 2025/05/15 09:44:36 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - ('a' - 'A'));
	}
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	int	c;

	c = 'z';
	printf("%c\n", ft_toupper(c));
	return (0);
}
//*/
