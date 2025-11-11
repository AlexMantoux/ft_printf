/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantoux <amantoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:14:55 by amantoux          #+#    #+#             */
/*   Updated: 2025/11/11 19:17:25 by amantoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
		write(1,&str[i++],1);
}

void	format_d(int n)
{
    if (n == -2147483648)
    {
            format_s("-2147483648");
            return ;
    }
    if (n < 0)
    {
            format_c('-');
            n *= -1;
    }
    if (n < 10)
    {
            format_c(n + '0');
            return ;
    }
    format_d(n / 10);
    format_c((n % 10) + '0');
}

void	format_u(unsigned int n)
{
    if (n < 10)
    {
            format_c(n + '0');
            return ;
    }
    format_d(n / 10);
    format_c((n % 10) + '0');
}

void	format_x(unsigned long n)
{
	char *base = "0123456789abcdef";

	if (n >= 16)
		format_x(n / 16);
	format_c(base[n % 16]);
}

void	format_X(unsigned long n)
{
	char *base = "0123456789ABCDEF";

	if (n >= 16)
		format_x(n / 16);
	format_c(base[n % 16]);
}

void	format_p(void *p)
{
	unsigned long ad;

	ad = (unsigned long)p;
	if (ad == 0)
		format_s("(nil)");
	else
	{
		format_s("0x");
		format_x(ad);	
	}
}

int	ft_printf(const char *c, ...)
{
	va_list args;
	int		i;

	va_start(args, c);
	i = 0;
	while (c[i])
	{
		if (c[i] == '%' && c[i + 1])
		{
			i++;
			if (c[i] == '%')
				format_c('%');
			if (c[i] == 'c')
				format_c(va_arg(args, int));
			if (c[i] == 's')
				format_s(va_arg(args, char *));
			if (c[i] == 'd' || c[i] == 'i')
				format_d(va_arg(args, int));
			if (c[i] == 'u')
				format_u(va_arg(args, unsigned int));
			if (c[i] == 'x')
				format_x(va_arg(args, unsigned int));
			if (c[i] == 'X')
				format_X(va_arg(args, unsigned int));
			if (c[i] == 'p')
				format_p(va_arg(args, void *));
		}
		else
			format_c(c[i]);
		i++;
	}
	va_end(args);
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int x = 42;
// 	char *str = "Alex";

// 	ft_printf("Adresse de x : %p\n", &x);
// 	ft_printf("Adresse de str : %p\n", str);
// 	ft_printf("Pointeur NULL : %p\n", NULL);
	
// 	printf("Adresse de x : %p\n", &x);
// 	printf("Adresse de str : %p\n", str);
// 	printf("Pointeur NULL : %p\n", NULL);
// 	return (0);
// }