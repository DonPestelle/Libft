/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <pestell2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:10:23 by pestell2          #+#    #+#             */
/*   Updated: 2024/11/11 17:25:18 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

int	main()
{
	size_t n = 2;
	char s[5] = {1, 2, 3};
	
	printf("%p\n", s);
	ft_bzero(s, n);
	
	printf("%p\n", s);
	return 0;
}
