/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:32:09 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/13 11:06:49 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H


# include <stdarg.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>

char *get_next_line(int fd);

#endif

