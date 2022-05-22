/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:11:20 by fakouyat          #+#    #+#             */
/*   Updated: 2022/05/11 22:47:41 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	int		i;
	int		length;
	char	*str_map;

	if (!s)
		return (NULL);
	i = 0;
	length = ft_strlen(s);
	str_map = (char *)malloc(sizeof(char) * (length + 1));
	if (!str_map)
		return (NULL);
	while (i < length)
	{
		str_map[i] = (*f)(i, s[i]);
		i++;
	}
	str_map[i] = 0;
	return (str_map);
}
