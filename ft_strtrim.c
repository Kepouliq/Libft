/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:31:52 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/25 19:42:16 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	trim_start;
	size_t	s1_end;

	if (s1 == NULL)
		return (NULL);
	while (ft_strchr(set, *s1))
		s1++;
	s1_end = ft_strlen(s1);
	while (ft_strchr(set, s1[s1_end - 1]))
		s1_end--;
	trim = (char *)malloc(sizeof(char) * (s1_end + 1));
	if (!trim)
		return (NULL);
	trim_start = s1_end;
	while (s1_end--)
	{
		*trim = *s1;
		s1++;
		trim++;
	}
	*trim = '\0';
	trim -= trim_start;
	return (trim);
}

/*
#include <stdio.h>

int main()
{
	char *str = "";
	char *set = "c";
	printf("%s", ft_strtrim(str, set));
	free(ft_strtrim(str, set));
	return (0);
}*/