//header

#include <stdio.h>
#include <unistd.h>

void  ft_putchar(char  c);
void  ft_nonexistent(void);
//w:width, l:left, m:middle, r:right. i is just a variable
void  draw(int  w, char  l, char  m, char  r)
{
  int i;

  if (w <= 0)
    return ;
  ft_putchar(l);
  i = 0;
  while (

void  rush(int x, int y)
{
  if (x <= 0 || y <= 0)
  {
    ft_nonexistent();
    return ;
  }
  ft_draw(x, '/', '*'
}
