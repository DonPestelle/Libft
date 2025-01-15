/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:42:38 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/15 15:14:11 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	int *mem;
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	return ((void *)mem);
}
/*
int	main()
{
	int *ptr = ft_calloc(10, sizeof(int));
	int	*ptr2 = malloc(10 * sizeof(int));

	printf("%p\n", ptr);
	printf("%p\n", ptr2);

	free(ptr);
	free(ptr2);

	return 0;
}*/
