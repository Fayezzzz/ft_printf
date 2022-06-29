/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexdown.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:07:03 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/27 16:02:56 by mkhairul         ###   ########.fr       */
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
		ft_puthexdown(n / 16);
		ft_puthexdown(n % 16);
	}
	else
	{
		t_length.len++;
		str = "0123456789abcdef";
		write(1, &str[n], 1);
	}
}
