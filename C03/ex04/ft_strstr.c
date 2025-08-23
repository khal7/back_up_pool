/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:25:14 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/22 08:29:32 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char	*str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			k = i;
			while (str[k] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				j++;
				k++;
			}
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("original: %s\n",strstr("hy ar how are you", "are"));
	printf("fake: %s\n",ft_strstr("hy ar how are you", "are"));
}*/
