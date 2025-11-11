/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantoux <amantoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:14:55 by amantoux          #+#    #+#             */
/*   Updated: 2025/11/11 12:23:09 by amantoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdarg.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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