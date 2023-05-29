/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkawauch <tkawauch@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 20:01:15 by tkawauch          #+#    #+#             */
/*   Updated: 2023/05/29 20:49:14 by tkawauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	if (s1 == 0 && s2 == 0)
		return (0);
	if (n == 0)
		return (0);
	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (n)
	{
		if (*dest != *src)
			return (*dest - *src);
		dest++;
		src++;
		n--;
	}
	return (0);
}

// #include        <stdio.h>
// #include        <string.h>

// int main(void)
// {
//         char buf1[] = "\0abc\0de";      /* 途中に空文字のある文字列 */
//         char buf2[] = "\0abc\0de";
//         char buf3[] = "\0abcdef";
// 		printf("%d", ft_memcmp(buf1, buf2, 7));

//         if (ft_memcmp(buf1, buf2, 7) == 0)
//                 printf("buf1 = buf2\n");
//         else
//                 printf("buf1 != buf2\n");

//         if (ft_memcmp(buf1, buf3, 7) == 0)
//                 printf("buf1 = buf3\n");
//         else
//                 printf("buf1 != buf3\n");

//         return 0;
// }