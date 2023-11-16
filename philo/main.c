/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:03:33 by abuchet           #+#    #+#             */
/*   Updated: 2023/10/06 11:45:34 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int argc, char **argv)
{
	t_control	*data;

	if (check_argv(argc, argv) != 0)
		return (-1);
	data = (t_control *)ft_calloc(1, sizeof(t_control));
	if (!data)
		return (-1);
	init_s_control(argv, data);
	philo_start(data);
	philo_end(data);
	return (0);
}
