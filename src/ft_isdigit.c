/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <pestell2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:53:27 by pestell2          #+#    #+#             */
/*   Updated: 2024/11/10 21:54:41 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(char c)
{
	if (c < '0' || c > '9')
		return 0;
	return 1;
}
/*
#include <stdio.h>

int	main()
{
	char c = 'e';

	printf("Is digit?:%d\n", ft_isdigit(c));
}
*/
