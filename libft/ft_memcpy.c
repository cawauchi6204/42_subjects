/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkawauch <tkawauch@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:30:43 by tkawauch          #+#    #+#             */
/*   Updated: 2023/05/25 21:02:08 by tkawauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*p;
	unsigned char	*s;

	i = 0;
	p = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
	{
		p[i] = s[i];
		i++;
	}
	return (p);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str1[128] = {1, 1, 1, 1, 1, 1, 1};
// 	char str2[] = "ab\0cde"; /* 途中に空文字のある文字列 */
// 	int i;

// 	printf("コピー前　中身の確認\n");
// 	for (i = 0; i < 7; i++)
// 		printf("%#x ", str1[i]);
// 	printf("\n");

// 	ft_memcpy(str1, str2, 5);

// 	printf("コピー後　中身の確認\n");
// 	for (i = 0; i < 7; i++)
// 		printf("%#x ", str1[i]);
// 	printf("\n");

// 	return 0;
// }