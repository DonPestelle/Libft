/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:51:15 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/09 15:17:17 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	char	*result;

	if (*little == 0 || big == little)
		return ((char *)big);
	i = ft_strlen((char *)little);
	while (*big && i <= len--)
	{
		if (!(ft_strncmp((char *)big, (char *)little, i)))
			return ((char *)big);
		big++;
	}
	return (NULL);
} /*
 char	*ft_strnstr(const char *h, const char *needle, size_t len)
 {
		if (*needle == 0 || h == needle)
			return ((char *)h);
		c = ft_strlen((char *)needle);
		while (*h && len >= c)
		{
			if (!(ft_strncmp((char *)h, (char *)needle, c)))
				return ((char *)h);
			h++;
			len--;
		}
		return (NULL);
 }
 /*int	main(void)
 {
		printf("%s\n", ft_strnstr((const char *)"hola como estas",
				(const char *)"como", 15));
		return (0);
 }*/
int	main(void)
{
	// Test 1: Substring found
	result = ft_strnstr("hola como estas", "como", 15);
	if (result != NULL)
	{
		printf("Test 1: Found: %s\n", result); // Expected: "como estas"
	}
	else
	{
		printf("Test 1: Not found\n");
	}
	// Test 2: Substring not found within the length
	result = ft_strnstr("hola como estas", "como", 3);
	if (result != NULL)
	{
		printf("Test 2: Found: %s\n", result);
	}
	else
	{
		printf("Test 2: Not found\n"); // Expected: Not found
	}
	// Test 3: Needle is an empty string (should return the original string)
	result = ft_strnstr("hola como estas", "", 15);
	if (result != NULL)
	{
		printf("Test 3: Found: %s\n", result); // Expected: "hola como estas"
	}
	else
	{
		printf("Test 3: Not found\n");
	}
	// Test 4: Needle is longer than the length of the string to search in (impossible to match)
	result = ft_strnstr("hello", "hello world", 5);
	if (result != NULL)
	{
		printf("Test 4: Found: %s\n", result);
	}
	else
	{
		printf("Test 4: Not found\n"); // Expected: Not found
	}
	// Test 5: Exact match (needle matches the first part of the string)
	result = ft_strnstr("hello", "hello", 5);
	if (result != NULL)
	{
		printf("Test 5: Found: %s\n", result); // Expected: "hello"
	}
	else
	{
		printf("Test 5: Not found\n");
	}
	// Test 6: Substring appears at the start
	result = ft_strnstr("hello world", "hello", 5);
	if (result != NULL)
	{
		printf("Test 6: Found: %s\n", result); // Expected: "hello world"
	}
	else
	{
		printf("Test 6: Not found\n");
	}
	// Test 7: Substring appears at the end of the string
	result = ft_strnstr("hello world", "world", 11);
	if (result != NULL)
	{
		printf("Test 7: Found: %s\n", result); // Expected: "world"
	}
	else
	{
		printf("Test 7: Not found\n");
	}
	// Test 8: No match (needle does not exist in the string)
	result = ft_strnstr("hello world", "universe", 11);
	if (result != NULL)
	{
		printf("Test 8: Found: %s\n", result);
	}
	else
	{
		printf("Test 8: Not found\n"); // Expected: Not found
	}
	// Test 9: Search length is 0 (no search performed)
	result = ft_strnstr("hello world", "world", 0);
	if (result != NULL)
	{
		printf("Test 9: Found: %s\n", result);
	}
	else
	{
		printf("Test 9: Not found\n"); // Expected: Not found
	}
	// Test 10: Search for needle at the very beginning of the string
	result = ft_strnstr("abracadabra", "abra", 12);
	if (result != NULL)
	{
		printf("Test 10: Found: %s\n", result); // Expected: "abracadabra"
	}
	else
	{
		printf("Test 10: Not found\n");
	}
	return (0);
}
