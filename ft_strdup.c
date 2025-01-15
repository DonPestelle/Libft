/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:07:05 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/13 17:21:39 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *result;

	result = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!(result))
		return (NULL);
	ft_strlcpy(result, s, ft_strlen((char *)s) + 1);
	result[ft_strlen((char *)s)] = '\0';
	return (result);
}

/*int	main()
{
	const char *s = "hola";

	printf("%s", ft_strdup(s));
	return 0;
}*/