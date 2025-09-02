/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 11:02:47 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/30 16:02:02 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	while (str[i])
		i++;
	ptr = malloc((i + 1) * sizeof(char));
	i = 0;
	if (!ptr)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
/*
int 	main()
{
	printf("%s\n", ft_strdup("hello"));
}*/
