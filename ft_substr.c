/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:19:30 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/16 11:09:57 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;
	int				s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if ((int)start >= s_len)
		return (ft_calloc(1, sizeof(char)));
	if (len > s_len - start)
		len = s_len - start;
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		res[i] = (char)s[(start) + i];
		i++;
	}
	res[i] = '\0';
	return ((char *)res);
}
/*
int	main(void)
{
	const char	*s = "Hola amigos";
	char 		*ret;

	ret = ft_substr(s, 3, 6);
	printf("String after is - |%s|\n", ret);
	return (0);
}*/
