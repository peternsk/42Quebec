/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:29:18 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/16 17:15:49 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void) 
{

  int fd;
  char *str;
  fd = open("test.txt", O_RDONLY);
		str = get_next_line(fd);
		printf("%s", str);

  return 0;
}
