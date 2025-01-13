/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:12:57 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/09 15:44:38 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (*(const unsigned char *)str != (unsigned char)c && 0 < n)
	{
		n--;
		str++;
	}
	if (*(const unsigned char *)str == (unsigned char)c)
		return ((void *)str);
	return (NULL);
}
/*
int main() {
   const char str1[] = "abcdef";
   const char ch = 'd';

   char* result = (char*)ft_memchr(str1, ch, strlen(str1));

   if (result != NULL) {
       printf("'%c' found at position %ld\n", ch, result - str1);
   } else {
       printf("'%c' not found in the string\n", ch);
   }

   return 0;
}*/
