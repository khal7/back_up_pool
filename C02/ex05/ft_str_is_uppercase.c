/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:57:15 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/17 11:11:20 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n ", ft_str_is_uppercase("hello"));
	printf("%d\n ", ft_str_is_uppercase("hEllo"));
	printf("%d\n ", ft_str_is_uppercase(""));
	printf("%d\n ", ft_str_is_uppercase("HELLO"));
}*/
