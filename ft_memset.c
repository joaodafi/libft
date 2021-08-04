/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 11:03:35 by jomiguel          #+#    #+#             */
/*   Updated: 2021/08/03 15:21:54 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int new_char, size_t how_many)
{
	size_t			counter;
	unsigned char	*holder;

	counter = 0;
	holder = (unsigned char *)str;
	while (counter < how_many)
	{
		holder[counter] = new_char;
		counter++;
	}
	return (str);
}