/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:45:53 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/21 07:40:01 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			i++;
		else 
			return (0);
	}
	return (1);
}

int main()
{
	char *tab = {"sasasa"};
	printf("%i",ft_str_is_lowercase(tab));
	char *bat = {"saGFsa"};
	printf("%i",ft_str_is_lowercase(bat));
}
