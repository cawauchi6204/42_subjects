/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkawauch <tkawauch@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:54:58 by tkawauch          #+#    #+#             */
/*   Updated: 2023/05/25 20:59:34 by tkawauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (s)
	{
		if (s == c)
			return (s);
		s++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "abcdefghijklmnabcdefghijklmn", *p;
	int c;

	printf("検索文字を入力してください。");
	c = getchar();
	
	p = strchr(str, c);
	if (p != NULL) {
		printf("%cは文字列の%d番目にあります。\n", c, p-str);
		printf("以降の文字列は%sです。\n", p);
	}
	else
		printf("%cは見つかりませんでした\n", c);
		
	return 0;
}