/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:04:51 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/02 15:52:28 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numchar(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
} 

int	ft_prnt_strng(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}

void	ft_putnbr_base_pf(int nb, char *base, int *len)
{
	size_t	base_lenght;

	base_lenght = ft_strlen(base);
	if (nb < 0 && base_lenght <= 10)
	{
		*len += ft_numchar('-');
		nb = nb * -1;
	}
	if (nb / base_lenght != 0)
		ft_putnbr_base_pf(nb / base_lenght, base, len);
	*len += ft_numchar(base[nb % base_lenght]);
}

int	ft_addarg(va_list args, char format_specifier)
{
	int sum_char;
	
	sum_char = 0;
	if (format_specifier == 'c')
		sum_char += ft_numchar(va_arg(args, int));
	else if (format_specifier == 's')
		sum_char += ft_prnt_strng(va_arg(args, char *));
	else if (format_specifier == 'd' || format_specifier == 'i')
		ft_putnbr_base_pf(va_arg(args, int), "0123456789", &sum_char);
	else if (format_specifier == 'x')
		ft_putnbr_base_pf(va_arg(args, unsigned int), "0123456789abcdef",
			&sum_char);
	else if (format_specifier == 'X')
		ft_putnbr_base_pf(va_arg(args, unsigned int), "0123456789ABCDEF",
			&sum_char);
	else if (format_specifier == 'u')
		ft_putnbr_base_pf(va_arg(args, unsigned long), "0123456789", &sum_char);
	else if (format_specifier == '%')
		sum_char += ft_numchar('%');
	else if (format_specifier == 'p')
	{
		sum_char += ft_prnt_strng("0x");
		ft_putnbr_base_pf(va_arg(args, unsigned long), "0123456789abcdef",
			&sum_char);
	}
	return (sum_char);
}

int	ft_printf(const char *str, ...)
{
	unsigned long	sum;
	int				i;
	va_list			args;

	sum = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			sum += ft_addarg(args, str[++i]);
		else
			sum += ft_numchar(str[i]);
		i++;
	}
	va_end(args);
	return (sum);
}
