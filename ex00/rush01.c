//header

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_nonexistent(void);
//w:width, l:left, m:middle, r:right. i is just a variable

void	ft_draw(int w, char l, char m, char r)
{
	int	i;

	i = 0;
	if
	(w <= 0)
	return ;
	ft_putchar(l);
	while (i < w - 2)
	{
		ft_putchar(m);
		i++;
	}
	if
	(w > 1)
	ft_putchar(r);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if
	(x <= 0 || y <= 0)
	{
		ft_nonexistent();
	return ;
}
ft_draw(x, '/', '*', '\\');
i = 2;
while
(i < y)
{
	ft_draw(x, '*', ' ', '*');
i++;
}
if
(y > 1)
ft_draw(x, '\\', '*', '/');
}
