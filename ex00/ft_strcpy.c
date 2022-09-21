/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:14:02 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/21 09:44:42 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while(src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
int main()
{
    char *dest;
    char *src = {"salut"} ;
    printf("%s",ft_strcpy(dest, src));
}
