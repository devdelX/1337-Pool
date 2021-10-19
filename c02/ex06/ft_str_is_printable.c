/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 14:11:52 by abel-oua          #+#    #+#             */
/*   Updated: 2021/10/02 14:11:54 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 127)
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char tab[20] = "";
	printf("%d\n", ft_str_is_printable(tab));
}*/
