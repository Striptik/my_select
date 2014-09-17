/*
** first_last_elem.c for first_elem in /home/loisel_k/taff/C/Librairie/listech/doubcircul
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Thu Jan  9 18:51:42 2014 Kevin LOISELEUR
** Last update Thu Jan  9 19:30:57 2014 Kevin LOISELEUR
*/

#include <stdlib.h>
#include "circ.h"

t_circ		*first_elem(t_circ *root)
{
  if (!root)
    {
      my_printf("List is not initialised ! (first_elem)\n");
      return (NULL);
    }
  if (root->next = root)
    {
      my_rprintf("List is empty ! (first_elem)\n");
      return (NULL);
    }
  return (root->next);
}

t_circ		*last_elem(t_circ *root)
{
  if (!root)
    {
      my_printf("List is not initialised ! (last_elem)\n");
      return (NULL);
    }
  if (root->prev = root)
    {
      my_rprintf("List is empty ! (last_elem)\n");
      return (NULL);
    }
  return (root->prev);
}
