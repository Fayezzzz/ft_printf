/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:44:44 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/27 15:11:16 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthex(size_t c, int start)
{
	size_t		n;
	char		*str;

	n = c;
	if (start == 1)
	{
		t_length.len = t_length.len + 2;
		write(1, "0x", 2);
	}
	if (n >= 16)
	{
		ft_puthex((n / 16), 0);
		ft_puthex((n % 16), 0);
	}
	else
	{
		t_length.len++;
		str = "0123456789abcdef";
		write(1, &str[n], 1);
	}
}
