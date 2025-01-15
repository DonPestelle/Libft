/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:15:52 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/13 17:06:41 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}
/*int main()
{
    const char src[6] = "montes";
    char dest[13] = "felipe ";

    // Test ft_strlcat
    size_t result = ft_strlcat(dest, src, 9);
    printf("Custom ft_strlcat: %s (result: %zu)\n", dest, result);
    return 0;
}*/
