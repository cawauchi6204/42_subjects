/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkawauch <tkawauch@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:44:46 by tkawauch          #+#    #+#             */
/*   Updated: 2023/05/22 18:52:04 by tkawauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(char c)
{
	return ((c >= '0' && c <= '9') || \
		(c >= 'a' && c <= 'z') || \
		(c >= 'A' && c <= 'Z'));
}