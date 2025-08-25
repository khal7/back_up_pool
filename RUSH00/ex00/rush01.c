/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:37:15 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/18 08:58:30 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printx(int x, char first, char midd, char last)
{
	int	l;

	l = 1;
	while (l <= x)
	{
		if (l == 1)
			ft_putchar(first);
		else if (l == x)
			ft_putchar(last);
		else
			ft_putchar(midd);
		l++;
	}
}

void	rush(int x, int y)
{
	int	o;

	o = 1;
	if (x < 0 || y < 0)
		return ;
	while (o <= y)
	{
		if (o == 1)
		{
			printx(x, '/', '*', '\\');
			ft_putchar('\n');
		}
		else if (o == y)
		{
			printx(x, '\\', '*', '/');
			ft_putchar('\n');
		}
		else
		{
			printx(x, '*', ' ', '*');
			ft_putchar('\n');
		}
		o++;
	}
}
