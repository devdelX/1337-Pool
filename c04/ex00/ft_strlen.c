/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:10:14 by abel-oua          #+#    #+#             */
/*   Updated: 2021/10/05 16:10:23 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = "Abdelhadi\n";
    ft_strlen(arr);
    printf("%s", arr);
}*/
