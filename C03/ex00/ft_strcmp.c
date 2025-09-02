/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:24:59 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/18 20:39:30 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
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
int main(void)
{
	printf("%d\n", ft_strcmp("hello", ""));
	printf("%d\n", ft_strcmp("hello", ""));
	printf("%d\n", ft_strcmp("hello", "hellz"));
	printf("++++++++++++++++++++++\n");
	printf("%d\n", strcmp("hello", ""));
	printf("%d\n", strcmp("hello", ""));
	printf("%d\n", strcmp("hello", "hellz"));
}
*/
