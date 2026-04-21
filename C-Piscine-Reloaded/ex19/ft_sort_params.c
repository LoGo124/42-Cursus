/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 21:27:47 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/04/20 14:51:55 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

void	ft_putstrs(char **strs)
{
	int	i;
	int	j;

	i = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			ft_putchar(strs[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*temp;
	char	**sorted_argv;
	int		i;

	sorted_argv = &argv[1];
	if (argc > 1)
	{
		i = 0;
		while (i < argc - 2)
		{
			if (ft_strcmp(sorted_argv[i], sorted_argv[i + 1]) > 0)
			{
				temp = sorted_argv[i];
				sorted_argv[i] = sorted_argv[i + 1];
				sorted_argv[i + 1] = temp;
				i = 0;
			}
			else
				i++;
		}
		ft_putstrs(sorted_argv);
	}
	return (0);
}
