/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 20:14:13 by smerelo           #+#    #+#             */
/*   Updated: 2019/05/08 07:22:48 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim_2(char *s, char c)
{
	char			*ss;
	int				i;
	int				j;
	int				k;

	if (s)
	{
		i = 0;
		j = ft_strlen(s) - 1;
		{
			while (s[i] == c)
				i++;
			k = -1;
			if ((ss = (char*)malloc(sizeof(ss) * (j - i + 1))) == NULL)
				return (NULL);
			while (s[j] == c)
				j--;
			i--;
			while (i <= j)
				ss[++k] = s[++i];
			ss[k] = '\0';
			return (ss);
		}
	}
	return (NULL);
}
