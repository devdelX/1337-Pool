/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 14:09:32 by abel-oua          #+#    #+#             */
/*   Updated: 2021/10/02 14:09:34 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int		main()
{
	char str1[] = "Abdelhadi";
	// The destination string size is 14.
	char str2[20] ;
	// copying n bytes of src into dest.
	ft_strncpy(str2, str1, 25);
	printf("Copied string: %s\n", str2);
	return (0);
}*/
