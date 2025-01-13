/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:42:00 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/09 15:12:19 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(int av, char **ac)
{
	int	e;

	if (av != 4)
		return 0;
	e = atoi(ac[3]);
	printf("%d\n", ft_strncmp(ac[1], ac[2], e - 1));
	return 0;
}*/
