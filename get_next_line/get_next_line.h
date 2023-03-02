/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:32:09 by pnsaka            #+#    #+#             */
/*   Updated: 2023/03/02 01:05:06 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
int		ft_strlen(char *s);
char	*str_attach(char *base_str, char *add_str);
char	*ft_strchr(const char *s, int c);
int		chr_bakn(char *str, char c);
char	*ft_new_line(char *str);
char	*ft_memmove(char *dst, char *src, size_t len);
char	*ft_memcpy(char *dst, const char *src, size_t n);

#endif
