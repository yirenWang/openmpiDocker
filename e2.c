#include <stdio.h>

void swap1(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char *argv[])
{
  int a;
  int b;

  a = 5;
  b = 6;
  printf("a=%i, b=%i \n",a,b);
  swap1(a,b);
  printf("a=%i, b=%i \n",a,b);
  swap2(&a,&b);
  printf("a=%i, b=%i \n",a,b);
}

