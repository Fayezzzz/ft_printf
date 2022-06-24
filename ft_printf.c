/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:40:07 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/24 14:33:46 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_commands(char forms, va_list args)
{
	char c;
	
	if (forms == 'c')
		ft_putchar(c = va_arg(args, int));
	else if (forms == 's')
		ft_putstr(va_arg(args, char *));
	else if (forms == 'p')
		ft_puthex(va_arg(args, size_t),1);
	else if (forms == 'd' || forms == 'i')
		ft_putnbr(va_arg(args, int));
	else if (forms == 'u')
		ft_putunbr(va_arg(args, unsigned int));
	else if (forms == 'x')
		ft_puthexup(va_arg(args, int));
	else if (forms == 'X')
		ft_puthexdown(va_arg(args, int));
	else if (forms == '%')
		ft_putchar(c = va_arg(args, int));
}

int ft_printf(const char *str, ...)
{
	int	i;
	int	count;
	va_list	args;
	
	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			ft_putchar(str[i]);
		else
			ft_commands(str[(i++) + 1], args);
		i++;
	}
	return (count);
}
