#include "minilibx-linux/mlx.h"
#include "bresenham_line_drawer.h"

int main()
{
	int	width, height;
	int	number;
	int	**coords;
	t_mlx	mlx;
	printf("Window width?:");
	scanf("%d", &width);
	printf("Window height?:");
	scanf("%d", &height);

	printf("Number of lines?:");
	scanf("%d", &number);
	coords = (int **)malloc(sizeof(int*) * number);
	for (int i = 0; i < number; i++)
	{
		coords[i] = (int *)malloc(sizeof(int) * 4);
		printf("%d-line of start points and end point?:", i);
		scanf("%d%d%d%d",&coords[i][0], &coords[i][1], &coords[i][2], &coords[i][3]);
	}
	printf("%d\n", coords[1][1]);

	mlx.mlx_ptr = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx_ptr, width, height, "BresenhamLineDrawer");
	for (int i = 0; i < number; i++)
	{
		draw_line(&mlx, coords[i][0], coords[i][1], coords[i][2], coords[i][3]);
		free(coords[i]);
	}
	free(coords);
	mlx_loop(mlx.mlx_ptr);
	return (0);
}
