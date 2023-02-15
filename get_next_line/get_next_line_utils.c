/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:32:05 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/15 16:18:36 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *s)
{
  int i;

  i = 0;
  while(s[i])
    {
      i++;
    }
  return(i);
}

char *str_attach(char *base_str, char *add_str)
{
  size_t base_str_len;
  size_t add_str_len;
  char *new_str;

  base_str_len = ft_strlen(base_str);
  add_str_len = ft_strlen(add_str);
  new_str = (char*)malloc((base_str_len + add_str_len) * sizeof(char) + 1);
  if(!new_str)
  {
    return(0);
  }

} 