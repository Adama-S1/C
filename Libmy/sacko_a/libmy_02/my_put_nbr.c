/*
** my_put_nbr.c for  in /home/sacko_a/C/libmy_01
** 
** Made by SACKO Adama
** Login   <sacko_a@etna-alternance.net>
** 
** Started on  Tue Oct 28 11:01:54 2014 SACKO Adama
** Last update Tue Oct 28 11:10:04 2014 SACKO Adama
*/

void	my_putchar(char c);
void	my_put_nbr(int nb)
{
  int	divid;
  
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
      my_putchar(nb);
    }
  divid = 1;
  while (nb / divid > 9)
    divid = divid * 10;
  while (divid != 0)
    {
      my_putchar('0' + (nb / divid) % 10);
      nb = nb % divid;
      divid = divid /10;
    }
}


}
