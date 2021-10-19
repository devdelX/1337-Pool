/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:26:25 by abel-oua          #+#    #+#             */
/*   Updated: 2021/10/05 09:26:29 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	v;

	i = 0;
	v = 0;
	if (nb == 0)
	{
		return (dest);
	}
	while (dest[i] != '\0')
		++i;
	while (src[v] != '\0' && v < nb)
	{
		dest[i] = src[v];
		v++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100] = "Hey there, ";
	char s2[] = "I'm Abdel";
	printf("%s\n", ft_strncat(s1,s2,17));
	return 0;    
}*/
