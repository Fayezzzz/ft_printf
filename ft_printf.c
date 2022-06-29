/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:44:31 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/27 16:01:09 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_commands(char forms, va_list args)
{
	char	c;

	if (forms == 'c')
		ft_putchar(c = va_arg(args, int));
	else if (forms == 's')
		ft_putstr(va_arg(args, char *));
	else if (forms == 'p')
		ft_puthex(va_arg(args, size_t), 1);
	else if (forms == 'd' || forms == 'i')
		ft_putnbr(va_arg(args, int));
	else if (forms == 'u')
		ft_putunbr(va_arg(args, unsigned int));
	else if (forms == 'X')
		ft_puthexup(va_arg(args, int));
	else if (forms == 'x')
		ft_puthexdown(va_arg(args, int));
	else if (forms == '%')
		ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	int			i;
	va_list		args;

	va_start(args, str);
	i = 0;
	t_length.len = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			ft_putchar(str[i]);
		else
			ft_commands(str[(i++) + 1], args);
		i++;
	}
	return (t_length.len);
}
