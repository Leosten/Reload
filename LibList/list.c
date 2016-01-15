#include ("header.h");

t_list		list_init(t_list *list)
{
  if (!(player = malloc(sizeof(t_player))))
    return (NULL);
  

}


// savoir si une valeur existe
t_list		list_search(t_list *list, char *tosearch)
{
  
  echo "list id, list val"
  return (list);
}


t_list		list_addlink(t_list *list, t_list *newlist)
{
  t_list	*tmp;
  t_list	*new_list;

  if (!(new_list = malloc(sizeof(t_player))))
    return (NULL);
  
  
}

t_list		list_removelink(t_list *list, t_list *to_remove)
{
  t_list	*tmp;



}


//remplacer une valeur connue par une autre
t_list		list_replacechar(t_list *list, char *to_change, char *to_replace)
{
  t_list	*tmp;

  if (list->val = NULL)
    {
      my_putstr("Il n'y a aucune valeur a changer");
      return (list);
    }
  tmp = list;
  while (tmp->next_list != NULL)
    {
      if (my_strcmp(tmp->val, to_change) == 0)
	{
	  tmp->val = to_change;
	}
      tmp = tmp->next_list;
    }
  return (list);
}
