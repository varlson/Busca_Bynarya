#include "busca.h"

int busca_binaria(int *v, int begin, int end, int elem)
{
    int middle;
    while(begin <= end)
    {
        middle = (begin+end)/2;

        if(elem > v[middle])
            begin = middle+1;
        else if(elem < v[middle])
            end = middle-1;
        else
            return v[middle];
    }

    return -1;
}

void printer(int *v, int size)
{
  for(int i=0; i<10; i++)
  {
      printf("%d ", v[i]);
  }
  printf("\n");
}