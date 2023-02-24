/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:29:18 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/24 13:30:03 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*int	main(void)
{
  int i;
  char *str;
		char *str;
		int fd;

	int fd;
  i = 0;
  fd = open("test.txt", O_RDONLY);
  while(i <= 5)
  {
  str = get_next_line(fd);
	printf("line ---. %s\n\n\n", str);
  free(str);
  i++;
  }
  return (0);
}
*/

int main(void)
{
    char    *str;
    int     fd;
    fd = open("test.txt", O_RDONLY);
        str = get_next_line(fd);
        printf("%s\n\n\n", str);
        free(str);
        str = get_next_line(fd);
        printf("%s\n\n\n", str);
        free(str);
        str = get_next_line(fd);
        printf("%s\n\n\n", str);
        str = get_next_line(fd);
        printf("%s", str);
}
