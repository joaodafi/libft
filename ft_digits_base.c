/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:08:05 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/09 18:42:39 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digits_base(unsigned long n, char *base)
{
	size_t	len;

	if (n < ft_strlen(base))
		return (1);
	len = 0;
	while (n > 0)
	{
		n /= ft_strlen(base);
		len++;
	}
	return (len);
}
