/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:07:54 by pnsaka            #+#    #+#             */
/*   Updated: 2023/01/23 15:22:10 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int nb, char *base)
{
	int	base_lenght;

	base_lenght = ft_strlen(base);
	if (nb < 0 && base_lenght <= 10)
		nb = nb * -1;
	if (nb / base_lenght != 0)
		ft_putnbr_base(nb / base_lenght, base);
	ft_putchar_fd(base[nb % base_lenght], 1);
}
