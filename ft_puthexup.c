/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:57:43 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/27 15:01:40 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexup(unsigned int c)
{
	size_t	n;
	char	*str;

	n = c;
	if (n >= 16)
	{
		ft_puthexup(n / 16);
		ft_puthexup(n % 16);
	}
	else
	{
		t_length.len++;
		str = "0123456789ABCDEF";
		write(1, &str[n], 1);
	}
}
