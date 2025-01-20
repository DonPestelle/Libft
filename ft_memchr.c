/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:12:57 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/15 16:10:58 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (*(const unsigned char *)str != (unsigned char)c && 0 < (n - 1))
	{
		n--;
		str++;
	}
	if (*(const unsigned char *)str == (unsigned char)c)
		return ((void *)str);
	return (NULL);
}
/*
void	ft_print_result(const char *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int main() {
   const char *str;

   str = ft_memchr("bonjourno", 'n', 2);
	if (!str)
		ft_print_result("NULL");
	else
		ft_print_result(str);
	return 0;
}*/
