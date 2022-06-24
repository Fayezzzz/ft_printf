/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <mkhairul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:50:43 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/24 14:35:05 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

void	ft_putchar(char s);
void	ft_putstr(char *s);
void	ft_putnbr(int c);
void	ft_putunbr(unsigned int c);
void	ft_puthex(size_t c, int start);
void	ft_puthexdown(unsigned int c);
void	ft_puthexup(unsigned int c);

int ft_printf(const char *str, ...);

#endif