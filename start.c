#include <stdio.h>                                                                                                                                                                                                                                                             

void    start(char **my_env)
{
  int   user;

  user = compare(my_env, "USER=", 5);
  printf("\033[H\033[2J");
  if (my_env[user] == NULL)
    printf("Welcome to this shell 2.0 Mr.\n");
  else
    printf("Welcome to this shell 2.0 Mr %s.\n", my_env[user] + 5);
}

void    my_prompt(char **my_env)
{
  int   user;

  user = compare(my_env, "USER=", 5);
  if (my_env[user] == NULL)
    my_putstr("[Anonymous@Animus] -> ");
  else
    {
      my_putstr("[");
      my_putstr(my_env[user] + 5);
      my_putstr("@pc-");
      my_putstr(my_env[user] + 5);
      my_putstr("] -> ");
    }
}
