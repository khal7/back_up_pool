/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:05:40 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/17 18:19:22 by khabouou         ###   ########.fr       */
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
		if (l == 1)
			print_x(x, 'A', 'B');
		else if (l == y)
			print_x(x, 'C', 'B');
		else
			print_x(x, 'B', ' ');
		l++;
	}
}
