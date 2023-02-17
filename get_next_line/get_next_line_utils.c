/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:32:05 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/17 13:15:47 by pnsaka           ###   ########.fr       */
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
    while(base_str[i])
    {
      new_str[i] = base_str[i];
      i++;
    }
  }
  while(add_str[++j])
      new_str[i++] = add_str[j];
  new_str[i] = '\0';
  return (new_str);
}

char *str_cpy(char *src_str)
{
  int i;
  int src_len;
  char *dest_str;

  src_len = ft_strlen(src_str);
  dest_str = (char*)malloc(src_len * sizeof(char) + 1);
  if(!dest_str)
  {
    return(0);
  }
  i = -1;
  while(src_str[++i])
    {
      dest_str[i] = src_str[i];
    }
  dest_str[i] = '\0';
  return (dest_str);
}