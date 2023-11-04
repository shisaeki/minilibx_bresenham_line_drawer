#ifndef BRESENHAM_LINE_DRAWER_H
# define BRESENHAM_LINE_DRAWER_H

# include "minilibx-linux/mlx.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct	s_mlx
{
	void *mlx_ptr;
	void *win;
}		t_mlx;

void	draw_line(t_mlx *mlx, int x0, int y0, int x1, int y1);

#endif
