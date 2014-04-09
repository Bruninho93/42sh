#include <stdio.h>

int     main(int ac, char **av, char **env)
{
  char **my_env;

  my_env = env;
  if (ac == 1)
    my_sh(my_env);
  else
    printf("Usage : ac != 1\n");
}
