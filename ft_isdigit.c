/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <pestell2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:53:27 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/08 12:17:15 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char c)
{
	return ((unsigned)c - '0' < 10);
}
/*
int	main(void)
{
	char	c;

	c = '2';
	printf("Is digit?:%d\n", ft_isdigit(c));
}*/
