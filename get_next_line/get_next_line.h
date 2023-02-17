/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:32:09 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/17 12:21:30 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H


# include <stdarg.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

#define BUFFER_SIZE 10

char *get_next_line(int fd);
int ft_strlen(char *s);
char *str_attach(char *base_str, char *add_str);
char *str_cpy(char *src_str);

#endif

