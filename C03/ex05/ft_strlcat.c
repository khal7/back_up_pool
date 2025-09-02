/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:09:01 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/23 09:43:45 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	len(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;
	unsigned int	len_dest;
	unsigned int	dif;

	i = 0;
	j = 0;
	len_src = len(src);
	len_dest = len(dest);
	dif = size - len_dest;
	if (size <= len_dest)
		return (size + len_src);
	while (dest[j])
		j++;
	while (src[i] && i < dif - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (len_src + len_dest);
}
/*
int main(void)
{
	char buff[20] = "hi how! are you ";

	printf("%d\n", ft_strlcat(buff, "hello world", 20));
	printf("%s\n", buff);
}*/
