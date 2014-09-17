/*
** circ.h for header for circular list in /home/loisel_k/taff/C/Librairie/listech/doubcircul
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Thu Jan  9 17:32:54 2014 Kevin LOISELEUR
** Last update Thu Jan  9 19:19:16 2014 Kevin LOISELEUR
*/

#ifndef _CIRC_H_
# define _CIRC_H_

typedef struct		s_circ
{
  void			*data;
  struct s_circ		*prev;
  struct s_circ		*next;
}			t_circ;

# define FAIL		-1
# define SUCCESS	0

/*
** Init and destroy list
*/

t_circ			*create_circ(void);
void			del_circ(t_circ *root);
void			free_circ(t_circ **root);

/*
** Add elem
*/

int			add_elem_before_elem(t_circ *elem, void *data);
int			add_elem_after_elem(t_circ *elem, void *data);
int			add_elem_beg(t_circ *root, void *data);
int			add_elem_end(t_circ *root, void *data);

/*
** Del Elem
*/

int			del_elem(t_circ *elem);
int			del_elem_beg(t_circ *root);
int			del_elem_end(t_circ *root);

/*
** Go to Head or Queue
*/

t_circ			*first_elem(t_circ *root);
t_circ			*last_elem(t_circ *root);

#endif /* _CIRC_H_ */
