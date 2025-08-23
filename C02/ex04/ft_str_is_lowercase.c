/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:57:15 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/17 11:05:53 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n ", ft_str_is_lowercase("hello"));
	printf("%d\n ", ft_str_is_lowercase("hEllo"));
	printf("%d\n ", ft_str_is_lowercase(""));
	printf("%d\n ", ft_str_is_lowercase("HELLO"));
}*/
