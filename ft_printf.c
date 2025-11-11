/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantoux <amantoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:14:55 by amantoux          #+#    #+#             */
/*   Updated: 2025/11/11 12:40:49 by amantoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdarg.h>

void	format_c(char c)
{
	write(1, &c, 1);
}

void	format_s(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1,str[i],1);
}

void	format_p(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1,str[i],1);
}

void 	

void	ft_format(char c, ...)
{
	va_list	argptr;

	va_start(argptr, c);
	if (c == '%')
	{
		ft_putchar('%');
	}
	if (c == '%')
		ft_putchar('%');
	if (c == 'c')
		ft_putchar();
	va_end(argptr);
}

int	ft_printf(const char *c, ...)
{
	int	i;
	va_list	argptr;
	i = 0;


	va_start(argptr, c);
	while (c[i])
	{
		if (c[i] == '%')
		{
			if (c[i + 1])
				ft_format(c[i + 1], arg
		}
		i++;
	}
	va_end(argptr);
}

int	main(void)
{
	return (0);
}