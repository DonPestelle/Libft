/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:28:23 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/13 17:52:41 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*cs1 = (const char *)s1;
	const char	*cs2 = (const char *)s2;
	size_t		i;

	i = 0;
	n--;
	if (n == 0)
		return (0);
	while (i < n && cs1[i] == cs2[i])
		i++;
	return (cs1[i] - cs2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_memcmp("abcd", "abcfd", 3));
	printf("%d\n", memcmp("abcd", "abcfd", 3));
	printf("%d\n", ft_memcmp("abcd", "abcffd", 4));
	printf("%d\n", memcmp("abcd", "abcffd", 4));
	printf("%d\n", ft_memcmp("abcd", "abbcfd", 3));
	printf("%d\n", memcmp("abcd", "aabcfd", 3));
	return (0);
}*/
