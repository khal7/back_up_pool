/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:59:13 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/16 21:17:51 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("expect: 1 : %d\n", ft_str_is_alpha("hellofuckingworld"));
	printf("expect: 0 : %d\n", ft_str_is_alpha("hellofuckingworld3"));
	printf("expect: 0 : %d\n", ft_str_is_alpha("3hellofuckingworld"));
	printf("expect: 0 : %d\n", ft_str_is_alpha("hellofuck!ingworld"));
	printf("expect: 1 : %d\n", ft_str_is_alpha(""));
	printf("expect: 0 : %d\n", ft_str_is_alpha("***"));
}
*/
