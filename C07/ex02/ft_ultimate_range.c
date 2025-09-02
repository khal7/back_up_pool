/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:14:04 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/30 11:22:17 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	res;

	i = 0;
	res = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!*range)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (res);
}
/*
int main()
{
	int *ptr;

	int res = ft_ultimate_range(&ptr, 1, 10);
	if (ptr == NULL)
		printf("NULL\n");
	else
	{
		for (int i = 0;i < 9;i++)
			printf("%d ", ptr[i]);
	}
	printf("%d\n", res);
	return (0);
}*/
