/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 17:32:31 by fbonhomm          #+#    #+#             */
/*   Updated: 2014/12/01 17:32:37 by fbonhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(s1);
	while (s2[i])
		s1[j++] = s2[i++];
	s1[j] = 0;
	return (s1);
}
