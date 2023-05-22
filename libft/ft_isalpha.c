/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkawauch <tkawauch@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:37:34 by tkawauch          #+#    #+#             */
/*   Updated: 2023/05/22 18:52:16 by tkawauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(char *str)
{
	int	count;

	count = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[count] != '\0')
	{
		if (!((str[count] >= 'a' && str[count] <= 'z')))
		{
			if (!(str[count] >= 'A' && str[count] <= 'Z'))
			{
				return (0);
			}
		}
		count++;
	}
	return (1);
}
