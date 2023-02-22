/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:25:47 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/21 20:36:46 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*str_stat;
	char		*buffer;
	int			i;

	i = 0;
	buffer = (char *)malloc(BUFFER_SIZE * sizeof(char) + 1);
	if (!buffer)
	{
		return (0);
	}
	while (read(fd, buffer, BUFFER_SIZE))
	{
		//read(fd, buffer, BUFFER_SIZE);
		str_stat = str_attach(str_stat, buffer);
		if (chr_bakn(buffer, '\n') == 1)
		{
			break;
		}
		// str_stat = ft_strchr(buffer, '\n');
		printf("%s\n", str_stat);
		i++;
	}
	return (ft_nique_ta_table(str_stat));
}
