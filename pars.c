/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 20:48:35 by mteffahi          #+#    #+#             */
/*   Updated: 2025/06/27 20:50:51 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	check(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (!(ft_isdigit(arg[i])))
			return (0);
		i++;
	}
	return (1);
}

int	pars(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!(check(argv[i])))
			return (0);
		i++;
	}
	return (1);
}
