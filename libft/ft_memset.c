/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkawauch <tkawauch@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:46:30 by tkawauch          #+#    #+#             */
/*   Updated: 2023/05/23 19:55:29 by tkawauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t n)
{
	int					i;
	unsigned char		*p;

	i = 0;
	p = b;
	while (n--)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (p);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str[] = "0123456789";
// 	ft_memset(str + 2, '*', 5);
// 	printf("%s\n", str);

// 	return (0);
// }
