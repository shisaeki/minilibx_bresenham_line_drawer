all:
	gcc -o BresenhamLineDrawer main.c bresenham_line_drawer.c minilibx-linux/libmlx_Linux.a -lXext -lX11
