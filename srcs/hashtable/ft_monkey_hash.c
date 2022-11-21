/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_monkey_hash.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:48:19 by jahuang           #+#    #+#             */
/*   Updated: 2022/01/14 15:31:04 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashtable.h"

/*
**	My cute "ft_monkey_hase" funcition. (^ ^)
**	                                     (o)
*/
int	ft_monkey_hash(char *str, int length)
{
	int	index;
	int	result;
	int	monkey_number;

	index = 0;
	result = 0;
	monkey_number = 89;
	while (str[index])
	{
		result += monkey_number * (int)str[index] * index;
		index++;
	}
	return (result % length);
}
