/*
** header.h for BattleForMidgard in /home/leonard/Documents/ETNA/C/BattleforMidgard
** 
** Made by LEUNG CHONG WO Leonard
** Login   <leungc_l@etna-alternance.net>
** 
** Started on  Mon Dec 14 11:10:56 2015 LEUNG CHONG WO Leonard
** Last update Thu Dec 17 16:24:28 2015 LEUNG CHONG WO Leonard
*/

#ifndef __Reload__
#define __Reload__

#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
  int		id;
  char		str;
  int		val;
  struct	s_list;
}		t_list;

#endif /* !Reload */
