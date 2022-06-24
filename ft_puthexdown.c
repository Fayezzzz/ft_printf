/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexdown.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:07:03 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/24 14:30:39 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexdown(unsigned int c)
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
		str = "0123456789abcdef";
		write(1, &str[n], 1);
	}
}
