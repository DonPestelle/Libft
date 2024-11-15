/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <pestell2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:53:27 by pestell2          #+#    #+#             */
/*   Updated: 2024/11/11 16:02:31 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(char c)
{
	return (unsigned)c - '0' < 10;
}
#include <stdio.h>

int	main()
{
	char c = '2';

	printf("Is digit?:%d\n", ft_isdigit(c));
}
