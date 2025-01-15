/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:30:27 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/13 14:14:41 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*b_dest;
	const char	*b_src;
	char		*buff;
	size_t		i;

	b_dest = (char *)dest;
	b_src = (const char *)src;
	buff = (char *)malloc(sizeof(char) * n);
	if (buff == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		buff[i] = b_src[i];
		i++;
	}
	i = 0;
	while (n > i)
	{
		b_dest[i] = buff[i];
		i++;
	}
	free(buff);
	return (b_dest);
}
/*
int	main(void)
{
	char src[] = "holacomoesras";

	ft_memmove(src + 2, src, strlen(src) + 1);
	printf("%s\n", src);

	char src2[] = "holacomoesras";
	memmove(src2 + 2, src2, strlen(src2) + 1);
	printf("%s\n", src2);
	return (0);
}*/
