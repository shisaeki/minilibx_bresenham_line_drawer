#include "bresenham_line_drawer.h"

void draw_line(t_mlx *mlx, int x0, int y0, int x1, int y1)
{
	int	dx, dy;
	int	sx, sy;
	int	err;
	int	e2;

	dx = abs(x1 - x0);
	dy = -abs(y1 - y0);
	sx = x0 < x1 ? 1 : -1;
	sy = y0 < y1 ? 1 : -1;
	err = dx + dy;

	while (1)
	{
		mlx_pixel_put(mlx->mlx_ptr, mlx->win, x0, y0, 0XFFFFFF);
		if (x0 == x1 && y0 == y1)
			break;
		e2 = 2 *err;
		if (e2 >= dy)
		{
			err += dy;
			x0 += sx;
		}
		if (e2 <= dx)
		{
			err += dx;
			y0 += sy;
		}
	}
}
