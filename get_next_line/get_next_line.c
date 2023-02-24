/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:25:47 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/24 10:32:48 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_memmove(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst >= src)
	{
		while (len > 0)
		{
			dst[len - 1] = src[len - 1];
			len--;
		}
	}
	else
	{
	if (!dst && !src)
		return (0);
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	}
	dst[ft_strlen((char *)src)] = '\0';
	return (dst);
}

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
		str_stat = str_attach(str_stat, buffer);
		if (chr_bakn(buffer, '\n') == 1)
		{
			break;
		}
		printf("%s\n", str_stat);
		i++;
	}
	return (ft_nique_ta_table(str_stat));
}
