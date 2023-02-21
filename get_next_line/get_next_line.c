/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:25:47 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/21 07:33:03 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_next_line(int fd)
{
	static char *str_stat;
	char *buffer;
    int i;
 
	i = 1;
	buffer = (char*)malloc(BUFFER_SIZE * sizeof(char) + 1);
	if (!buffer)
	{
		return (0);
	} 
    while(!ft_strchr(buffer ,'\n'))
    {
      read(fd, buffer, BUFFER_SIZE);
      str_stat = str_attach(str_stat, buffer);
      str_stat = ft_strchr(buffer, '\n'); 
      i++;
    }
    //ft_avantbn(buffer)
    //str_stat = ft_strchr(buffer, '\n');
    //printf("%d", i);
	return(str_stat);
}
