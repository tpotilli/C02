/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:07:37 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/22 09:59:13 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{	
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lowercase(str);
	if (str[i] >= 'a' || str[i] <= 'z')
	{
		str[i] -= 32;
	}
	i++;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i - 1] >= '0' && str[i - 1] <= '9')
			&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		str[i] -= 32;
		else
		i++;
	}
	return (str);
}
