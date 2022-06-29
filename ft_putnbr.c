/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:48:51 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/27 15:00:42 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr(int c)
{
	long	n;
	char	nb;

	n = c;
	if (n < 0)
	{
		t_length.len++;
		n *= -1;
		write(1, "-", 1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		t_length.len++;
		nb = n + 48;
		write(1, &nb, 1);
	}
}
