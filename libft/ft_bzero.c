/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkawauch <tkawauch@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:06:48 by tkawauch          #+#    #+#             */
/*   Updated: 2023/05/23 20:29:51 by tkawauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = s;
	while (n--)
	{
		p[i] = 0;
		i++;
	}
}

// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "hogehoge";
// 	char	str2[] = "fugafuga";
// 	ft_bzero(str1, 3);
// 	bzero(str2, 3);

// 	printf("%s", str1);
// 	printf("%s", str2);

// 	return (0);
// }