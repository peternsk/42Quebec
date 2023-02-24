/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:29:18 by pnsaka            #+#    #+#             */
/*   Updated: 2023/02/24 13:39:28 by pnsaka           ###   ########.fr       */
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
	while (i <= 5)
	{
		str = get_next_line(fd);
		printf("line ---> %s\n\n\n", str);
		free(str);
		i++;
	}
	return (0);
}
