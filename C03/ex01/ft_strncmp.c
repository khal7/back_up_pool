/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:42:22 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/22 08:20:34 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("hello", "hella", 4));
	printf("%d\n", ft_strncmp("hello", "", 7));
	printf("%d\n", ft_strncmp("", "hella", 4));
	printf("==============================\n");
	printf("%d\n", strncmp("hello", "hella", 4));
	printf("%d\n", strncmp("hello", "", 7));
	printf("%d\n", strncmp("", "hella", 4));
}*/
