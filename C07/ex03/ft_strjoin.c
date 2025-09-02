/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 08:41:09 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/30 15:50:36 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	strs_len(char **strs, int size)
{
	int	strs_len;
	int	i;
	int	j;

	i = 0;
	j = 0;
	strs_len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			strs_len++;
			j++;
		}
		i++;
	}
	return (strs_len);
}

char	*size_0(void)
{
	char	*ptr;

	ptr = malloc(1);
	ptr[0] = 0;
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	int		j;
	char	*ptr;

	if (size == 0)
		return (size_0());
	len = 0;
	while (sep[len])
		len++;
	ptr = malloc(strs_len(strs, size) + 1 + (len * (size - 1)));
	j = 0;
	i = 0;
	while (i < size)
	{
		len = 0;
		while (strs[i][len])
			ptr[j++] = strs[i][len++];
		len = 0;
		while (sep[len] && i < size - 1)
			ptr[j++] = sep[len++];
		i++;
	}
	ptr[j] = 0;
	return (ptr);
}
/*
int main()
{
	char *av[] = {"hello", "how", "are", "you"};
	printf(">> %s\n",ft_strjoin(0, av, "___"));
}*/
