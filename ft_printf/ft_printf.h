/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:03:58 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/02 12:36:46 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_numchar(int c);
int		ft_prnt_strng(char *str);
void	ft_putnbr_base_pf(int nb, char *base, int *len);
int     ft_addarg(va_list args, char format_specifier);
int		ft_printf(const char *str, ...);

#endif
