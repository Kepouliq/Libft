/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:24:17 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/25 17:51:38 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if (!len || !s)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	s += start;
	i = 0;
	while (len)
	{
		sub[i] = *s;
		i++;
		s++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
/*

#include <stdio.h>

int main()
{
	char *s = "coucou";
	printf("%s", ft_substr(s, 1, 3));
	return(0);// dedi sarah
}*/