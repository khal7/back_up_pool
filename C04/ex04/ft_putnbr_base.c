/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:31:54 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/25 14:46:35 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

long	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] && !base[1])
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == ' '
				|| base[i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long		n;
	long		base_len;
	int			i;
	char		buff[33];

	i = 0;
	base_len = ft_strlen(base);
	n = nbr;
	if (!base_check(base))
		return ;
	if (nbr == 0)
		write(1, "0", 1);
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	while (n)
	{
		buff[i] = base[n % base_len];
		n /= base_len;
		i++;
	}
	while (i--)
		write(1, &buff[i], 1);
}
/*
int main(void)
{
	ft_putnbr_base(0, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MAX, "01");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MIN, "01");
	write(1, "\n", 1);
	ft_putnbr_base(0, "poneyvif");
}*/
