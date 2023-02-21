/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:49:38 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/20 19:21:28 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

#define BUFFER_SIZE 8

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
		if (s[i - 1] == (char)c)
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

char	*get_next_line(int fd)
{
	static char *str_stat;
	char *buffer;
  int i;
 

 
	i = 1;
	buffer = (char*)malloc(BUFFER_SIZE * sizeof(char) + 1);
	if (!buffer)
	{
		return (0);
	} 
  while(!ft_strchr(buffer ,'\n'))
    {
      read(fd, buffer, BUFFER_SIZE);
      str_stat = str_attach(str_stat, buffer);
      str_stat = ft_strchr(buffer, '\n'); 
      i++;
    }
  //ft_avantbn(buffer)
  //str_stat = ft_strchr(buffer, '\n');
  //printf("%d", i);
	return(str_stat);
}

int main(void) 
{

  int fd;
  char *str;
  fd = open("test.txt", O_RDONLY);
	str = get_next_line(fd);
	printf("%s", str);
  

  return 0;
}
