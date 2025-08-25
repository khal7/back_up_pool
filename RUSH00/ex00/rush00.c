/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:56:15 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/17 17:26:35 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_x(int x, char start_end, char mid)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar(start_end);
		else
			ft_putchar(mid);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	l;

	l = 1;
	if (x < 0 || y < 0)
		return ;
	while (l <= y)
	{
		if (l == 1 || l == y)
			print_x(x, 'o', '-');
		else
			print_x(x, '|', ' ');
		l++;
	}
}
