/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:20:39 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/20 20:08:14 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

static int	ft_expected(int n)
{
	if (n == -1)
	{
		printf("N/A");
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		n;
	int		fd;
	char	*line;

	if (argc == 1 || (n = atoi(argv[1])) == 0 || (fd = open("Makefile", O_RDONLY)) < 0)
		return (0);

	if (n < 0)
		return ft_expected(n);
	else if (n == 1)
	{
		while (get_next_line(fd, &line) > 0)
		{
			printf("%s\n", line);
			free(line);
		}
		close(fd);
	}
	return (0);
}
