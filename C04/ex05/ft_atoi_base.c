/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:42:52 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/25 09:44:02 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	len(char *str)
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

int	check_sign(char *str)
{
	int	sign;
	int	i;

	i = 0;
	sign = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	if (sign % 2 != 0)
		return (-1);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	res = 0;
	if (!base_check(base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13)
		|| str[i] == 32 || str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
				res = res * len(base) + j;
			j++;
		}
		i++;
	}
	return (res * check_sign(str));
}
/*
int main(void)
{
//	printf("%d\n", power(8, 3));
	
	printf("%d\n", ft_atoi_base("----ff", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("ff", "0123456789abcdef"));
}*/
