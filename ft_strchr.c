/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:45:20 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/08 14:53:28 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}
/*
int	main(void)
{
	const char	s[11] = "Hola amigos";
	char		c;

	c = 'a';
	printf("s=%s\t", s);
	printf("c=%c\n", c);
	printf("strchr=%s\n", ft_strchr(s, c));
	return (0);
}*/
