#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int k = 0;
  int d = 0;

  if (argc != 3)
    exit(84);
  k = atoi(argv[1]);
  d = atoi(argv[2]);
  for (int i = 0; i <= d; i += 1)
    printf("%d * %d = %d\n",i, k,  i * k);
  return 0;
}
