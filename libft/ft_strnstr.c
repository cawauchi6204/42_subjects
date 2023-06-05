/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkawauch <tkawauch@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 20:54:18 by tkawauch          #+#    #+#             */
/*   Updated: 2023/05/29 22:40:22 by tkawauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_char_match(const char *str, const char*target, size_t len)
{
	size_t	i;

	i = 0;
	while (target[i] != '\0' && len--)
	{
		if (target[i] != str[i])
			return (0);
		i++;
	}
	if (i != ft_strlen(target))
		return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	si;

	si = 0;
	if (needle[si] == '\0')
		return ((char *)(&haystack)[si]);
	if (len == 0)
		return (0);
	while (haystack[si] && len--)
	{
		if (is_char_match(&haystack[si], needle, len))
			return ((char *)(&haystack)[si]);
		si++;
	}
	// if (is_char_match(&haystack[si], needle, len))
	// 	return ((char *)(&haystack)[si]);
	return (0);
}


// #include "libft.h"

// int	search(const char *str, const char *to_find, size_t len, size_t i)
// {
// 	size_t	a;

// 	a = 0;
// 	while (to_find[a] != '\0' && i < len)
// 	{
// 		if (to_find[a] != str[a])
// 			return (0);
// 		a++;
// 		i++;
// 	}
// 	if (a != ft_strlen(to_find))
// 		return (0);
// 	return (1);
// }

// char	*ft_strnstr(const char *str, const char *to_find, size_t len)
// {
// 	size_t	i;

// 	if (to_find[0] == '\0')
// 		return ((char *)(str));
// 	if (len == 0)
// 		return (0);
// 	i = 0;
// 	while (str[i] && i < len)
// 	{
// 		if (str[i] == *to_find)
// 			if (search(&str[i], to_find, len, i))
// 				return ((char *)(&str[i]));
// 		i++;
// 	}
// 	return (NULL);
// }

// // #include "libft.h"

// // int	is_char_match(const char *str, const char*target, size_t len)
// // {
// // 	size_t	i;

// // 	i = 0;
// // 	while (target[i] != '\0' && len--)
// // 	{
// // 		if (target[i] != str[i])
// // 			return (0);
// // 		i++;
// // 	}
// // 	if (i != ft_strlen(target))
// // 		return (0);
// // 	return (1);
// // }

// // char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// // {
// // 	size_t	si;

// // 	si = 0;
// // 	if (needle[si] == '\0')
// // 		return ((char *)(&haystack)[si]);
// // 	if (len == 0)
// // 		return (0);
// // 	while (haystack[si] && si < len)
// // 	{
// // 		if (is_char_match(&haystack[si], needle, len))
// // 			return ((char *)(&haystack)[si]);
// // 		si++;
// // 	}
// // 	if (is_char_match(&haystack[si], needle, len))
// // 		return ((char *)(&haystack)[si]);
// // 	return (0);
// // }
