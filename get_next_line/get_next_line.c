/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:25:47 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/17 14:29:02 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_next_line(int fd)
{
	static char *str_stat;
	char *buffer;
	char *temp;
	
	buffer = (char*)malloc(BUFFER_SIZE * sizeof(char));
	if (!buffer)
	{
		return (0);
	}
	read(fd, buffer, BUFFER_SIZE);
	temp = str_attach(str_stat, buffer);
	str_stat = str_cpy(temp);
	free(temp);

	return(0);
}
