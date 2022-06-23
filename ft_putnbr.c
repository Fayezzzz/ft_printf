/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:48:51 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/23 19:55:46 by mkhairul         ###   ########.fr       */
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
		nb = n + 48;
		write(1, &nb, 1);
	}
}
