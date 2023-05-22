// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_memset.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: tkawauch <tkawauch@student.42tokyo.jp>     +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/05/22 20:27:52 by tkawauch          #+#    #+#             */
// /*   Updated: 2023/05/22 21:32:40 by tkawauch         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <stdio.h>

// void	*ft_memset(void *b, int c, size_t len)
// {
// 	while (len--)
// 	{
// 		b = &c;
// 		b++;
// 	}
// 	return (b);
// }

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	const unsigned char	uc;
// 	unsigned char		*p;

// 	uc = c;
// 	*p = (unsigned char *)s;
// 	while (n--)
// 		*p++ = uc;

// 	return (s);
// }

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str[] = "0123456789";
// 	ft_memset(str + 2, '*', 5);
// 	printf("%s\n", str);

// 	return (0);
// }
