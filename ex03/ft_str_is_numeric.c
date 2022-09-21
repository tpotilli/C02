/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:39:10 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/21 07:22:41 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if(str[i] == 0)
	{
		return (1);
	}
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int main()
{
	char *tab = {"12554"};
	printf("%i",ft_str_is_numeric(tab));
	char *bat = {"4523hfg"};
	printf("%i",ft_str_is_numeric(bat));
}
