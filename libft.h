/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <pestell2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:03:59 by pestell2          #+#    #+#             */
/*   Updated: 2025/01/09 15:15:34 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

/*___________(functions)___________*/

void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(char c);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
#endif
