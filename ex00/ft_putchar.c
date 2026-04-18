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
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
