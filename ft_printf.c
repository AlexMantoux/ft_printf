/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantoux <amantoux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:14:55 by amantoux          #+#    #+#             */
/*   Updated: 2025/11/13 08:45:18 by amantoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *c, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, c);
	i = 0;
	count = 0;
	while (c[i])
	{
		if (c[i] == '%' && c[i + 1])
		{
			i++;
			if (c[i] == '%')
				count += format_c('%');
			if (c[i] == 'c')
				count += format_c(va_arg(args, int));
			if (c[i] == 's')
				count += format_s(va_arg(args, char *));
			if (c[i] == 'd' || c[i] == 'i')
				count += format_d(va_arg(args, int));
			if (c[i] == 'u')
				count += format_u(va_arg(args, unsigned int));
			if (c[i] == 'x')
				count += format_x(va_arg(args, unsigned int));
			if (c[i] == 'X')
				count += format_x_upper(va_arg(args, unsigned int));
			if (c[i] == 'p')
				count += format_p(va_arg(args, void *));
		}
		else
		{
			count++;
			format_c(c[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}

// #include <stdio.h>

// int main(void)
// {
// 	int x = 42;
// 	char *str = "Alex";

// 	ft_printf("Adresse de x : %p\n", &x);
// 	ft_printf("Adresse de str : %p\n", str);
// 	ft_printf("Pointeur NULL : %p\n", NULL);

// 	printf("Adresse de x : %p\n", &x);
// 	printf("Adresse de str : %p\n", str);
// 	printf("Pointeur NULL : %p\n\n", NULL);

// 	printf("%d\n", ft_printf("alex %s %%", "alex"));
// 	printf("%d\n\n", printf("alex %s %%", "alex"));

// 	printf("%d\n", ft_printf("%d\n", 123));
// 	printf("%d\n", printf("%d\n", 123));

// 	printf("%d\n", ft_printf("%u\n", (unsigned int)-1));
// 	printf("%d\n", printf("%u\n", (unsigned int)-1));

// 	printf("%d\n", ft_printf("%x\n", (unsigned int)954954));
// 	printf("%d\n", printf("%x\n", (unsigned int)954954));

// 	printf("%d\n", ft_printf("%X\n", (unsigned int)954954));
// 	printf("%d\n", printf("%X\n", (unsigned int)954954));


// 	printf("%d\n", ft_printf("MAdresse de x : %p\n", &x));
// 	printf("%d\n", ft_printf("MAdresse de str : %p\n", str));
// 	printf("%d\n\n", ft_printf("MPointeur NULL : %p\n", NULL));

// 	printf("%d\n", printf("Adresse de x : %p\n", &x));
// 	printf("%d\n", printf("Adresse de str : %p\n", str));
// 	printf("%d\n", printf("Pointeur NULL : %p\n", NULL));
// 	return (0);
// }