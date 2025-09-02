/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:21:57 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/16 20:57:10 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = 0;
	return (dest);
}
/*
int	main(void)
{
	char	dest[17];
	printf("fake: %s\n", ft_strncpy(dest, "hello world", 5));
//	printf("fake: %s\n", ft_strncpy(dest, "hello world", 15));
//	printf("fake: %s\n", ft_strncpy(dest, "hello world", 0));
//	printf("fake: %s\n", ft_strncpy(dest, "", 5));
	printf("============================================\n");
	printf("real: %s\n", strncpy(dest, "hello world", 5));
//	printf("real: %s\n", strncpy(dest, "hello world", 15));
//	printf("real: %s\n", strncpy(dest, "hello world", 0));
//	printf("real: %s\n", strncpy(dest, "", 5));
}*/
