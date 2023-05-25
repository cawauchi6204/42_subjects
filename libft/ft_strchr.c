/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkawauch <tkawauch@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:54:58 by tkawauch          #+#    #+#             */
/*   Updated: 2023/05/25 21:23:19 by tkawauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0' && (char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "abcdefghijklmnabcdefghijklmn", *p;
// 	int c;

// 	// printf("検索文字を入力してください。");
// 	// c = getchar();
// 	// c = 'l';
// 	c = 'l' + 256;
// 	p = strchr(str, c);
// 	if (p != NULL) {
// 		printf("%cは文字列の%ld番目にあります。\n", c, p-str);
// 		printf("以降の文字列は%sです。\n", p);
// 	}
// 	else
// 		printf("%cは見つかりませんでした\n", c);

// 	return 0;
// }

// // 	char *s = "libft-test-tokyo";
// // 	/* 18 */ ASSERT_EQ_STR(ft_strchr(s, 'l' + 256), strchr(s, 'l' + 256));
// // 	/* 19 */ ASSERT_EQ_STR(ft_strchr(s, 'i' + 256), strchr(s, 'i' + 256));
// // 	/* 20 */ ASSERT_EQ_STR(ft_strchr(s, 'l' - 256), strchr(s, 'l' - 256));
// // 	/* 21 */ ASSERT_EQ_STR(ft_strchr(s, 'i' - 256), strchr(s, 'i' - 256));