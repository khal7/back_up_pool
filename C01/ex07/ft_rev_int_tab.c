/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 10:38:48 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/16 08:45:35 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size -= 1;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	for (int i = 0;i < 6;i++)
		printf("%d ", arr[i]);
	printf("\n");
	ft_rev_int_tab(arr, 6);
	for (int i = 0;i < 6;i++)
		printf("%d ", arr[i]);
}*/
