/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 08:25:00 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/21 08:32:17 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		if(str[i] >= 33 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

int main()
{
	char *tab = {"qgbkd48658./"};
	printf("%i",ft_str_is_printable(tab));
	char *bat = {"jgk'\r'ks5'\n'"};
	printf("%i",ft_str_is_printable(bat));
}
