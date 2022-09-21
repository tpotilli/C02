/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:26:39 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/21 07:06:14 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] <= 'A' && str[i] >= 'Z')
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
	char *tab = "salut";
	printf("%i",ft_str_is_alpha(tab));
	char *bat = ".,'";
	printf("%i",ft_str_is_alpha(bat));
}
