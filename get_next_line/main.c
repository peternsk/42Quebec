/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:29:18 by pnsaka            #+#    #+#             */
/*   Updated: 2023/03/02 00:58:43 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		i;
	char	*str;
	int		fd;

	i = 0;
	fd = open("test.txt", O_RDONLY);
	while (i <= 66)
	{
		str = get_next_line(fd);
		printf("line ---> %s", str);
		free(str);
		i++;
	}
	return (0);
}
