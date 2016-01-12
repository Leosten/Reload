/*
** header.h for BattleForMidgard in /home/leonard/Documents/ETNA/C/BattleforMidgard
** 
** Made by LEUNG CHONG WO Leonard
** Login   <leungc_l@etna-alternance.net>
** 
** Started on  Mon Dec 14 11:10:56 2015 LEUNG CHONG WO Leonard
** Last update Thu Dec 17 16:24:28 2015 LEUNG CHONG WO Leonard
*/

#ifndef __BattleForMidgard__
#define __BattleForMidgard__

#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
  char		str;
  int		val;
  struct	s_list;
}		t_list;

typedef struct  s_creature
{
  char		*name;
  int		lvl;
  int		pv;
  int		pvmax;
  int		pm;
  int		pmmax;
}		t_creature;

typedef struct	s_team
{
  int		indice;
  t_creature	*pokemon;
  struct s_team	*nextpoke;
}		t_team;

typedef struct	s_player
{
  char		*name;
  t_team	*team;
}		t_player;

t_creature	*getCreature();
void		my_putchar(char c);
void		my_putstr(char *str);
char		*readLine();
char		*my_strdup(char *str);
int		my_strlen(char *str);
int		my_strcmp(char *s1, char *s2);
t_creature	*initmonster();
void		my_put_nbr(int n);
void		displaymonster(t_creature *monster);
void		displaypokemon(t_creature *monster);
void		monsterappear();
void		startdisplay(t_player *player);
void		displayoob(t_player *player);
void		newmonsterdisplay();
t_player	*teamlist(t_player *player);
char		*rlprompt();
t_player	*mainmenu(t_player *player);
char		*choosename(char *argv, char *name);
t_player	*initstart(t_player *player, char *argv);
t_player	*capturepokemon(t_creature *newmonster, t_player *player);
t_player	*addpokemon(t_creature *newmonster, t_player *player);
t_player	*captureboucle(t_player *player);
  
#endif /* !BattleForMidgard */
