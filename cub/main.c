/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:56:37 by mochegri          #+#    #+#             */
/*   Updated: 2020/11/01 20:08:23 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"

int main ()
{
	void	*mlx_ptr;
	void	*win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr ,9000, 5000, "cub3");
	mlx_loop(mlx_ptr);
	return 0;
}
