/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkawauch <tkawauch@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:09:34 by tkawauch          #+#    #+#             */
/*   Updated: 2023/05/25 19:24:33 by tkawauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	unsigned char *p;
	unsigned char *s;

	i = 0;
	p = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (p > s)
	{
		i = len -1;
		while (i)
		{
			p[i] = s[i];
			i--;
		}
		p[0] = s[0];
	}
	else
	{
		while (len--)
		{
			ft_memcpy(p, s, len);
		}
	}
	return (p);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str1[] = "abcdefghijklmnopqrstu";
// 	char str2[] = "abcdefghijklmnopqrstu";

// 	printf("お手本移動前：%s\n", str1);

// 	memmove(str1 + 5, str1, 10); /* 重複エリアのコピー */

// 	printf("お手本移動後：%s\n", str1);

// 	printf("自作移動前  ：%s\n", str2);

// 	ft_memmove(str2 + 5, str2, 10); /* 重複エリアのコピー */

// 	printf("自作移動後  ：%s\n", str2);

// 	return 0;
// }