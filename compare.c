#include <string.h>                                                                         

int     compare(char **s1, char *s2, int n)
{
  int   i;
  int   j;

  i = 0;
  while (s1[i] != NULL)
    {
      j = 0;
      while (j <= n && s1[i][j] == s2[j])
        j = j + 1;
      if (j == n)
        return (i);
      i = i + 1;
    }
  return (0);
}
