/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:48:02 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/09 16:08:43 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (!*(unsigned char *)s)
		return (0);
	while (n-- > 0)
		*(unsigned char *)s++ = (unsigned char)c;
	return (s);
}
/*
int	main(void)
{
	char str[] = "hola";
	ft_memset((void *)str, 'c', 2);
	printf("%s\n", str);
	return (0);
}*/
