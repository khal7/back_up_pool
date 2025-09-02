/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabouou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 20:00:58 by khabouou          #+#    #+#             */
/*   Updated: 2025/08/20 13:34:58 by khabouou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*lower_case(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*s;

	s = lower_case(str);
	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
		i++;
	}
	while (s[i])
	{
		if (!((s[i] >= 'a' && s[i] <= 'z')
				|| (s[i] >= 'A' && s[i] <= 'Z')
				|| (s[i] >= '0' && s[i] <= '9')))
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char a[] = "	hi, .how a/re you? 42words fo.88+rty-two; fifty+and+one";
	printf("%s\n", ft_strcapitalize(a));
}*/
