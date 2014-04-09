#include <string.h>                                                                         
#include <unistd.h>

void    my_putstr(char *str)
{
  write(1, str, strlen(str));
}
