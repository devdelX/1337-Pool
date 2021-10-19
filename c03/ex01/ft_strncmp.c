/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:24:33 by abel-oua          #+#    #+#             */
/*   Updated: 2021/10/05 09:24:41 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] != 0 && s2[i] != 0 && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int main()
{
	char s1[] = "aaaaaaa";
	char s2[] = "aaaaaat";
printf("%d", ft_strncmp(s1,s2,7));
}*/
