#include "minilibx-linux/mlx.h"
#include "bresenham_line_drawer.h"

int main()
{
	int	number;
	int	**coords;
	t_mlx	mlx;

	scanf("Number of lines?: %d", &number);
	coords = (int **)malloc(sizeof(int*) * number);
	for (int i = 0; i < number; i++)
	{
		coords[i] = (int *)malloc(sizeof(int) * 4);
		scanf(i + "-line start point and end point:%d%d%d%d",
			coords[i][0],
	     		coords[i][1],
			coords[i][2],
			coords[i][3]
			);
	}
	printf("%d\n", coords[1][1]);
	mlx.mlx_ptr = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx_ptr, 500, 500, "BresenhamLineDrawer");
//	draw_line(&mlx, 100, 100, 200, 300);
	
//	mlx_loop(mlx.mlx_ptr);
	return (0);
}
