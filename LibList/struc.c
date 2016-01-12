/*
** struc.c for BattleForMidgard in 
** 
** Made by LEUNG CHONG WO Leonard
** Login   <leungc_l@etna-alternance.net>
** 
** Started on  Tue Dec 15 15:10:27 2015 LEUNG CHONG WO Leonard
** Last update Thu Dec 17 16:56:08 2015 LEUNG CHONG WO Leonard
*/

#include "header.h"

t_player	*initstart(t_player *player, char *argv)
{
  if (!(player = malloc(sizeof(t_player))))
    return (player);
  player->name = argv;
  player->team = NULL;
  return (player);
}

t_player	*addpokemon(t_creature *newmonster, t_player *player)
{
  t_team	*newteam;
  t_team	*tmp;

  if (!(newteam = malloc(sizeof(t_team))))
    return (NULL);
  newteam->pokemon = newmonster;
  newteam->nextpoke = NULL;
  if (player->team == NULL)
    {
      newteam->indice = 0;
      player->team = newteam;
      return (player);
    }
  tmp = player->team;
  while (tmp->nextpoke != NULL)
    tmp = tmp->nextpoke;
  tmp->nextpoke = newteam;
  tmp->nextpoke->indice = tmp->indice + 1;
  return (player);
}

t_player	*teamlist(t_player *player)
{
  t_team	*tmp;

  if (player->team == NULL)
    {
      my_putstr("You don't have any monster with you!");
      return (player);
    }
  else
    {
      my_putstr("Monster n° ");
      my_put_nbr(player->team->indice);
      my_putstr("  \n");
      displaypokemon(player->team->pokemon);
    }
  tmp = player->team;
  while (tmp->nextpoke != NULL)
    {
      my_putstr("Monster n° ");
      my_put_nbr(tmp->indice);
      my_putstr("  \n");
      displaypokemon(tmp->pokemon);
      tmp = tmp->nextpoke;
    }
  return (player);
}
