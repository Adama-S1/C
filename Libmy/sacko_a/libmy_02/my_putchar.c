/*
** my_putchar.c for j in /home/sacko_a/C/libmy_01
** 
** Made by SACKO Adama
** Login   <sacko_a@etna-alternance.net>
** 
** Started on  Tue Oct 28 10:47:41 2014 SACKO Adama
** Last update Tue Oct 28 10:51:02 2014 SACKO Adama
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
