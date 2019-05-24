#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'p';
  float c = 1234;
  double d = 2345.6;



  // print value and size of an int variable
  printf("int has a size of  %d bytes\n", sizeof(a));
  printf("char has a size of %d bytes\n", sizeof(b));
  printf("float has a size of %d bytes\n", sizeof(c));
  printf("double has a size of %d bytes\n", sizeof(d));

}

