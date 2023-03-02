/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:32:05 by pnsaka            #+#    #+#             */
/*   Updated: 2023/03/01 22:54:39 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_new_line(char *str)
{
	char	*str_wobakn;
	int		i;

	i = 0;
	str_wobakn = malloc(sizeof(char) + ft_strlen(str) + 1);
	while (str)
	{
		str_wobakn[i] = str[i];
		if (str[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	str = ft_memmove(str, str + i, ft_strlen(str + i));
	//printf("nouvelle stat --->%s\n", str);
	//printf("reste ---> %s\n", str);
	str_wobakn[i] = '\0';
	return (str_wobakn);
}

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

int	chr_bakn(char *str, char c)
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

char	*str_attach(char *base_str, char *add_str)
{
	size_t comb_len;
	char *new_str;
	int i;
	int j;

	comb_len = (ft_strlen(base_str) + ft_strlen(add_str));
	new_str = (char *)malloc(comb_len * sizeof(char) + 1);
	if (!new_str)
	{
		return (0);
	}
	i = 0;
	j = 0;
	if (base_str != NULL)
	{
		while (base_str[i])
		{
			new_str[i] = base_str[i];
			i++;
		}
		free(base_str);
	}
	while (add_str[j])
	{
		new_str[i] = add_str[j];
		j++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}