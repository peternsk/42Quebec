/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:32:05 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/24 10:32:03 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_nique_ta_table(char *str)
{
  char *str_wobakn;
  int i;
  int j;
  
  i = 0;
  j = 0;
  while(str[i] != '\n')
      i++;
  str_wobakn = malloc(sizeof(char) * i + 1);
  while(j <= i)
    {
      str_wobakn[j] = str[j];
      j++;
    }
  str = ft_strchr(str, '\n');
  printf("reste ---> %s\n", str);
  return(str_wobakn);
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

int chr_bakn(char *str, char c)
{
  int i;

  i = 0;
  while(str[i])
    {
      if(str[i] == c)
         return(1);
      i++;
    }
  return(0);
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