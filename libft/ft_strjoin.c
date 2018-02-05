/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsokolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 11:56:07 by vsokolog          #+#    #+#             */
/*   Updated: 2017/11/23 11:56:08 by vsokolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *concat;
	char *cs2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(cs2 = ft_strdup(s2)))
		return (NULL);
	if (!(concat = ft_strcat((char*)s1, cs2)))
		return (NULL);
	ft_strdel(cs2);
	return (concat);
}
