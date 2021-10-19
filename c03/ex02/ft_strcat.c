/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:25:38 by abel-oua          #+#    #+#             */
/*   Updated: 2021/10/05 09:25:41 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	v;

	i = 0;
	while (dest[i] != '\0')
		++i;
	v = 0;
	while (src[v] != '\0')
	{
		dest[i] = src[v];
		i++;
		v++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main()
{
	char s1[100] = "Hey there, ";
	char s2[] = "its Abdel";
printf("%s", ft_strcat(s1,s2));
}*/
