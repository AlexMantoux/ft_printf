/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_x_upper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantoux <amantoux@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:35:40 by amantoux          #+#    #+#             */
/*   Updated: 2026/08/22 23:57:27 by amantoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	format_x_upper(unsigned long n)
{
	int		count;
	char	*base;

	base = "0123456789ABCDEF";
	count = 0;
	count++;
	if (n >= 16)
		count += format_x_upper(n / 16);
	format_c(base[n % 16]);
	return (count);
}
