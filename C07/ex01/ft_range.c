/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:28:28 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/30 10:05:41 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;
	int	res;

	if (min >= max)
		return (NULL);
	i = 0;
	res = max - min;
	ptr = malloc(res * sizeof(int));
	while (i < res)
	{
		ptr[i] = min++;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	*ptr;
	
	ptr = ft_range(-12, -7);
	if (ptr == NULL)
		return 0;
	for (int i = 0;i < 20;i++)
		printf("%d\n", ptr[i]);
}*/
