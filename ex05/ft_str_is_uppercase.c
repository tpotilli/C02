/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:55:34 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/21 08:22:54 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else 
			return (0);
	}	
	return (1);
}

int main()
{
	char *tab = {"SALUT"};
	printf("%i",ft_str_is_uppercase(tab));
	char *bat = {"SALut"};
	printf("%i",ft_str_is_uppercase(bat));
}
