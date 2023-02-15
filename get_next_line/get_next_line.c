/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:25:47 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/15 11:12:55 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define BUFFER_SIZE 5

void	get_line(int fd)
{
	static char *str;

	char *buffer;
	char *temp;
	int buff_len;
	int i;
	
	i = 0;
	buff_len = ft_strlen(buffer);
	temp = (char*)malloc(buff_len * sizeof(char));
	if(!temp)
	{
		return(0);
	}
	read(fd, buffer, BUFFER_SIZE);
	while(buffer[i] != '\n')
	{
		
	}
	
}