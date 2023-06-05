/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkawauch <tkawauch@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 21:31:45 by tkawauch          #+#    #+#             */
/*   Updated: 2023/06/05 21:33:29 by tkawauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dst, char *src)
{
	int	d_len;
	int	i;

	d_len = ft_strlen(dst);
	i = 0;
	while (src[i])
		dst[d_len++] = src[i++];
	dst[d_len] = '\0';
	return (dst);
}

void	ft_joincat(int size, char **strs, char *str, char *sep)
{
	int	i;

	i = 1;
	while (--size)
	{
		ft_strcat(str, sep);
		ft_strcat(str, strs[i++]);
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		str_count;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	str_count = 0;
	i = 0;
	while (i < size)
		str_count += ft_strlen(strs[i++]) + ft_strlen(sep);
	str_count -= ft_strlen(sep);
	str = malloc(str_count + 1);
	if (!str)
		return (0);
	ft_strcpy(str, strs[0]);
	ft_joincat(size, strs, str, sep);
	str[str_count] = '\0';
	return (str);
}
