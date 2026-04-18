#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puterror(void)
{
	ft_putchar("Error\n");
}

void	ft_print_table(int table[x][y], int ans)
{
	int	width;
	int	height;

	width = 0;
	while (width < x)
	{
		ft_putchar(&ans);
		ft_putchar(" ");
		width++;
		if (width == x)
		{
			ft_putchar("\n");
			height++;
			width = 0;
		}
		if (height == y)
			break ;
	}
	return (0);
}
