/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 07:34:07 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/20 12:26:00 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
		if (n > src)
		{
			dest[i] = '0';
		}
	}
	return *dest;
}
int main()
{
	char *s1 = {"stay with me"};
	char *s2 = {" "};
	int	n = 10;

	ft_strncpy(s2,s1,n);
	printf("%s",s2);
}
