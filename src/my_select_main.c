/*
** my_select_main.c for main for my_select in /home/loisel_k/taff/C/Systeme-Unix/my_select/src
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Wed Jan 15 15:05:22 2014 Kevin LOISELEUR
** Last update Wed Jan 15 15:05:22 2014 Kevin LOISELEUR
*/

int		main(int ac, char **av)
{
  t_circ	*root;

  if (av > 1)
    {
      root = my_fullfil_list(av);
    }
}

t_circ		*my_fulfill_list(char **av)
{
  int		i;
  t_circ	*root;

  i = 1;
  root = create_circ();
  while (av[i])
    add_elem_end(root, av[i++]);
  add_elem_end(root, NULL);  // si a l'envers, add_elem_beg a la place de end.
  return (root);
}
