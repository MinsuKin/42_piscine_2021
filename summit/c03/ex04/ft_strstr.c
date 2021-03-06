/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkim <minkim@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:28:54 by minkim            #+#    #+#             */
/*   Updated: 2021/02/22 16:28:30 by minkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int y;

	i = 0;
	j = 0;
	y = 0;
	while (to_find[y])
		y++;
	if (y == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			if (j == (y - 1))
				return (&str[i - j]);
			if (str[i + 1] == to_find[j + 1])
				j++;
		}
		i++;
	}
	return (0);
}
