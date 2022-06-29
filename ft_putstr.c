/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:13:37 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/27 15:24:48 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char *s)
{
	int	i;
	
	i = 0;
	if (s != 0)
	{
		while (s[i] != '\0')
		{
			t_length.len++;
			write(1, &s[i], 1);
			i++;
		}
	}
	else
		ft_putstr("(null)");
}
