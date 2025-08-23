/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:01:13 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/16 20:21:01 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
int	main(void)
{
	char buffer[12];

	printf("fake: %s\n", ft_strcpy(buffer, "hello world"));
	printf("fake: %s\n", ft_strcpy(buffer, ""));
	printf("fake: %s\n", ft_strcpy(buffer, "hello world fuck off"));
	printf("=================================\n");
	printf("real: %s\n", strcpy(buffer, "hello world"));
	printf("real: %s\n", strcpy(buffer, ""));
	printf("real: %s\n", strcpy(buffer, "hello world fuck off"));
	
}*/
