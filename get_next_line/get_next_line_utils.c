/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:32:05 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/21 07:41:54 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *s)
{
  int i;

  i = 0;
  if(!s)
  {
    return(0);
  }
  while(s[i])
    {
      i++;
    }
  return(i);
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
			return ((char *)s + i);
		i++;
	}
	return (0);
}

char *str_attach(char *base_str, char *add_str)
{
  size_t comb_len;
  char *new_str;
  int i;
  int j;

  comb_len = (ft_strlen(base_str) + ft_strlen(add_str));
  new_str = (char*)malloc(comb_len * sizeof(char) + 1);
  if(!new_str)
  {
    return(0);
  }
  i = -1;
  j = -1;
  if(base_str != NULL)
  {
    while(base_str[++i])
    {
      new_str[i] = base_str[i];
      // printf("%s", new_str);
    }
    free(new_str);
  }
  while(add_str[++j]&& add_str[j] != '\n')
      new_str[++i] = add_str[j];
  new_str[++i] = '\0';
  return (new_str);
}