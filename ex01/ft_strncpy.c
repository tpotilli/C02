/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 07:34:07 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/21 13:27:23 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
		while(i < n)
		{
			src[i] = '\0';
			i++;
		}
	}
	return (dest);
}
int main()
{
	char *s1 = "stay with me";
	char s2[50];
	printf("%s",ft_strncpy(s2, s1, 10));
}
