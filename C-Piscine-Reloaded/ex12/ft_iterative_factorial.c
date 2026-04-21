/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 14:34:01 by ilopez-g          #+#    #+#             */
/*   Updated: 2026/04/20 14:36:27 by ilopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (--nb > 0)
		res *= nb;
	return (res);
}
/*
int main(void)
{
	printf("%d", ft_iterative_factorial(5));
}
*/
