/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:42:32 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/04/21 14:22:56 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	check_ac(int ac)
{
	if (ac != 2)
	{
		if (ac == 1)
			write(1, "File name missing.\n", 19);
		else if (ac > 2)
			write(1, "Too many arguments.\n", 20);
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	fd;
	int	rbytes;
	int	buff[4096];

	if (!check_ac(ac))
		return (1);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	rbytes = read(fd, buff, 4096);
	while (rbytes > 0)
	{
		write(1, buff, rbytes);
		rbytes = read(fd, buff, 4096);
	}
	if (rbytes == -1)
		write(1, "Cannot read file.\n", 18);
	close(fd);
	return (0);
}
