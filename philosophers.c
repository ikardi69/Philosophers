/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 14:57:29 by mteffahi          #+#    #+#             */
/*   Updated: 2025/06/27 20:52:05 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int main(int argc, char **argv)
{
	if (argc != 5 && argc != 6)
	{
		printf("Error: Invalid number of arguments.\n");
        printf("Usage: ./philo number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]\n");
        return (1);
	}
	return (0);
}