//stdheader

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_nonexistent(void)
{
	write(1, "Error: aha- we thought of that too :3\n", 38);
}
