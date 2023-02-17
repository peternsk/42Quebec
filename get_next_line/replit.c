/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:49:38 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/17 17:49:44 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

#define BUFFER_SIZE 10

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
    while(base_str[++i])
    {
      new_str[i] = base_str[i];
    }
  }
  while(add_str[++j])
      new_str[++i] = add_str[j];
  new_str[++i] = '\0';
  return (new_str);
}

/*char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	size_t	new_str_len;
	char	*new_str;

	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (0);
	new_str_len = ((ft_strlen(s1) + ft_strlen(s2)) + 1);
	new_str = (char *)malloc(new_str_len * sizeof(char));
	if (!new_str)
		return (new_str);
	while (s1[++i])
		new_str[i] = s1[i];
	while (s2[++j])
		new_str[i++] = s2[j];
	new_str[i] = 0;
	return (new_str);
}*/

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

char	*get_next_line(int fd)
{
	static char *str_stat;
	char *buffer;
	char *temp;
	
	buffer = (char*)malloc(BUFFER_SIZE * sizeof(char) + 1);
	if (!buffer)
	{
		return (0);
	}
	  while(read(fd, buffer, BUFFER_SIZE))
      {
        //printf("%s\n", buffer);
        
        temp = str_attach(str_stat, buffer);
        //printf("%s\n", temp);
        //printf("%s\n", temp);
        str_stat = str_cpy(temp);
        //free(temp);
      }
	  return(temp);
}

int main(void) 
{

  int fd;
  char *str;
  fd = open("texte.txt", O_RDONLY);
	str = get_next_line(fd);
	printf("%s", str);

  return 0;
}
