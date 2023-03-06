/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:32:05 by pnsaka            #+#    #+#             */
/*   Updated: 2023/03/03 15:28:58 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		return (0);
	}
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i + 1);
		i++;
	}
	return (0);
}

size_t	chr_bakn(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_new_line(char *str)
{
	char	*str_wobakn;
	int		i;

	i = 0;
	str_wobakn = malloc(sizeof(char) + ft_strlen(str) + 1);
	while (str[i])
	{
		str_wobakn[i] = str[i];
		if (str[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	str_wobakn[i] = '\0';
	str = ft_memmove(str, str + i, ft_strlen(str + i));
	return (str_wobakn);
}

char	*str_attach(char *base_str, char *add_str)
{
	char	*new_str;
	int		len;

	len = (ft_strlen(base_str) + ft_strlen(add_str));
	new_str = (char *)malloc(len * sizeof(char) + 1);
	if (!new_str)
		return (0);
	len = 0;
	if (base_str != NULL)
	{
		while (base_str[len])
		{
			new_str[len] = base_str[len];
			len++;
		}
		free(base_str);
	}
	while (*add_str)
	{
		new_str[len] = *add_str;
		len++;
		add_str++;
	}
	new_str[len] = '\0';
	return (new_str);
}
