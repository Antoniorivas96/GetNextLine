/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:14:43 by anrivas-          #+#    #+#             */
/*   Updated: 2023/07/10 13:31:35 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str3;
	size_t	tam;

	if (!s1 || !s2)
		return (0);
	tam = ft_strlen(s1) + ft_strlen(s2);
	str3 = (char *)malloc (tam + 1);
	if (!str3)
		return (0);
	ft_memcpy(str3, s1, ft_strlen(s1));
	ft_memcpy(str3 + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (str3);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cont;

	if (!src && !dst)
		return (0);
	cont = 0;
	while (cont < n)
	{
		*((unsigned char *)(dst + cont)) = *((unsigned char *)(src + cont));
		cont++;
	}
	return (dst);
}

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (s[cont])
		cont++;
	return (cont);
}

char	*ft_strchr(const char *str, int c)
{
	if ((!*str && (char)c == '\0'))
		return ((char *)str);
	while (*str != '\0')
	{
		if (*str == (char) c)
			return ((char *) str);
		str++;
		if (*str == (char) c)
			return ((char *) str);
	}
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	tam;

	tam = ft_strlen(s);
	if (tam <= start)
		return (0);
	if (tam - start < len)
		len = tam - start;
	substr = (char *)malloc (len + 1);
	if (!substr)
		return (0);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
