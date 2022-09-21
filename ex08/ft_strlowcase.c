/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:34:53 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/21 09:30:10 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int main()
{
	char tab[] = "SALUT lES GARS";
	printf("%s",ft_strlowcase(tab));
	char bat[] = {"SALut LEs GArs"};
	printf("\n");
	printf("%s",ft_strlowcase(bat));
}
