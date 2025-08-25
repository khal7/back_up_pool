/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:16:59 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/21 10:31:06 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	count_sign;
	int	res;

	i = 0;
	res = 0;
	count_sign = 0;
	while ((str[i] >= 9 && str[i] <= 12) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count_sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if (count_sign % 2 != 0)
		return (res * -1);
	return (res);
}
/*
int main(void)
{
	printf("%d\n", ft_atoi(" 	---+--+1234ab567"));
}*/
