/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:06:35 by abel-oua          #+#    #+#             */
/*   Updated: 2021/10/10 17:06:38 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sim;
	int	res;

	i = 0;
	sim = 1;
	res = 0;
	while (str[i] <= 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str [i] == '-')
		{
			sim *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sim);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
    printf("%d\n", ft_atoi(argv[1]));
    return (0);
}*/
