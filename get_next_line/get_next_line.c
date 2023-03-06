/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:25:47 by pnsaka            #+#    #+#             */
/*   Updated: 2023/03/03 15:22:05 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_memmove(char *dst, char *src, size_t len)
{
	len = ft_strlen(src);
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
		ft_memcpy(dst, src, len);
	}
	dst[ft_strlen(src)] = '\0';
	return (dst);
}

char	*ft_memcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

char	*get_next_line(int fd)
{
	static char	*str_stat;
	char		buffer[BUFFER_SIZE + 1];
	ssize_t		read_char;

	read_char = read(fd, buffer, BUFFER_SIZE);
	while (read_char > 0)
	{
		buffer[read_char] = '\0';
		str_stat = str_attach(str_stat, buffer);
		if (chr_bakn(buffer, '\n') == 1)
			break ;
		read_char = read(fd, buffer, BUFFER_SIZE);
	}
	if ((read_char == -1) || (read_char <= 0 && ft_strlen(str_stat) == 0))
	{
		if (str_stat)
		{
			free(str_stat);
			str_stat = NULL;
		}
		return (NULL);
	}
	return (ft_new_line(str_stat));
}
