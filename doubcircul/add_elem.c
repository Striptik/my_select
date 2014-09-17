/*
** add_elem.c for add elem in circular list in /home/loisel_k/taff/C/Librairie/listech/doubcircul
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Thu Jan  9 18:02:07 2014 Kevin LOISELEUR
** Last update Thu Jan  9 19:27:55 2014 Kevin LOISELEUR
*/

#include <stdlib.h>
#include "circ.h"

int		add_elem_before_elem(t_circ *elem, void *data)
{
  t_circ	*new;

  if (!elem || !elem->next || !elem->prev)
    {
      my_rprintf("elem, elem->next ou elem->prev is/are Null ! (add_before)");
      return (FAIL);
    }
  if (!(new = malloc(sizeof(*new))))
    {
      my_rprintf("Error on Malloc ! (add_alem_before)\n");
      return (FAIL);
    }
  new->data = data;
  new->prev = elem->prev;
  new->next = elem;
  elem->prev->next = new;
  elem->prev = new;
  return (SUCCESS);
}

int		add_elem_after_elem(t_circ *elem, void *data)
{
  t_circ	*new;

  if (!elem || !elem->next || !elem->prev)
    {
      my_rprintf("elem, elem->next ou elem->prev is/are Null ! (add_after)");
      return (FAIL);
    }
  if (!(new = malloc(sizeof(*new))))
    {
      my_rprintf("Error on Malloc ! (add_elem_after_elem)\n");
      return (FAIL);
    }
  new->data = data;
  new->next = elem->next;
  new->prev = elem;
  elem->next->prev = new;
  elem->next = new;
  return (SUCCESS);
}

int		add_elem_beg(t_circ *root, void *data)
{
  if (add_elem_after_elem(root, data) == FAIL)
    {
      my_rprintf("Error on addin elem at the begining ! (add_elem_beg)\n");
      return (FAIL);
    }
  return (SUCCESS);
}

int		add_elem_end(t_circ *root, void *data)
{
  if (add_elem_before_elem(root, data) == FAIL)
    {
      my_rprintf("Error on addin elem at the begining ! (add_elem_end)\n");
      return (FAIL);
    }
  return (SUCCESS);
}
