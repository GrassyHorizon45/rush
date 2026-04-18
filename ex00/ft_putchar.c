#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puterror(void)
{
	ft_putchar("Error\n");
}

void	ft_print_table(int table[4][4])
{
	int	width;
	int	height;
	int	ans;

	width = 0;
	while (width < 4)
	{
		ft_putchar(&ans);
		ft_putchar(" ");
		width++;
		if (width == 4)
		{
			ft_putchar("\n");
			ft_putchar(&ans);
			height++;
			width = 0;
		}
		if (height == 4)
			break ;
	}
	return (0);
}
