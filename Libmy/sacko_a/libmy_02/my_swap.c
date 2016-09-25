/*
** my_swap.c for k in /home/sacko_a/C/libmy_01
** 
** Made by SACKO Adama
** Login   <sacko_a@etna-alternance.net>
** 
** Started on  Tue Oct 28 11:11:49 2014 SACKO Adama
** Last update Tue Oct 28 11:19:20 2014 SACKO Adama
*/

void	my_swap(int *a, int *b)
{    
  int   c;// variable tempo 
  c = *a; // val a --> c 
  *a = *b;// val a <-> val b
  *b = c;
}
