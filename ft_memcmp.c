/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:09:03 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/23 16:25:43 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = s1;
	str2 = s2;
	while (n && *str1 == *str2)
	{
		str1 ++;
		str2 ++;
		n--;
	}
	return (*str1 - *str2);
}

/*
#include <stdio.h>

int main()
{
	char str1[] = "Hello, world!";
	char str2[] = "Hello, World!";
	char str3[] = "Hello, world!";
	char str4[] = "Hello,";
	
	printf("Comparing '%s' and '%s' for first 5 characters: %d\n",
		 str1, str2, ft_memcmp(str1, str2, 5));
	printf("Comparing '%s' and '%s' for first 7 characters: %d\n",
		 str1, str2, ft_memcmp(str1, str2, 7));
	printf("Comparing '%s' and '%s' for first 13 characters: %d\n",
		 str1, str3, ft_memcmp(str1, str3, 13));
	printf("Comparing '%s' and '%s' for first 7 characters: %d\n",
		 str1, str4, ft_memcmp(str1, str4, 7));
	
	return 0;
}*/