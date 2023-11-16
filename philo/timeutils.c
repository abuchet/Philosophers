/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timeutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:08:11 by abuchet           #+#    #+#             */
/*   Updated: 2023/10/06 11:45:23 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

long long	start_time(void)
{
	struct timeval	t0;

	gettimeofday(&t0, NULL);
	return ((t0.tv_sec * 1000) + (t0.tv_usec / 1000));
}

long long	timestamp(t_control *input)
{
	struct timeval	current;

	gettimeofday(&current, NULL);
	return (((current.tv_sec * 1000) + (current.tv_usec / 1000)) - input->t0);
}

void	ft_sleep(t_philo *p, int t_wait)
{
	long long	time_now;
	long long	diff;

	time_now = timestamp(p->args);
	while (1)
	{
		diff = (timestamp(p->args) - time_now);
		if (diff >= t_wait)
			break ;
		usleep(1000);
	}
}
