/*
** del_elem.c for delete elem for circular list in /home/loisel_k/taff/C/Librairie/listech/doubcircul
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Thu Jan  9 18:42:15 2014 Kevin LOISELEUR
** Last update Thu Jan  9 19:28:31 2014 Kevin LOISELEUR
*/

#include <stdlib.h>
#include "circ.h"

int		del_elem(t_circ *elem)
{
  if (!elem)
    {
      my_rprintf("root is not existing (del_elem)\n");
      return (FAIL);
    }
  elem->prev->next = elem->next;
  elem->next->prev = elem->prev;
  free(elem);
  return (SUCCESS);
}

int		del_elem_beg(t_circ *root)
{
  if (root->next == root)
    {
      my_rprintf("List is empty ! (del_elem_beg)\n");
      return (FAIL);
    }
  if (del_elem(root->next) == FAIL)
    return (FAIL);
  return (SUCCESS);
}

int		del_elem_end(t_circ *root)
{
  if (root->prev == root)
    {
      my_printf("List is empty ! (del_elem_end)\n");
      return (FAIL);
    }
  if (del_elem(root->prev) == FAIL)
    return (FAIL);
  return (SUCCESS);
}
