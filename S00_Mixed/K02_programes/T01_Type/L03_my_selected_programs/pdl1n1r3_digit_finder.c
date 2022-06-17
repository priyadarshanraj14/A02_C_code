#include<stdio.h> // hellow 1 3
void main ()
{
  while (1)
  {
  printf (" To find the digit in given number\n");
  int a,count=0;
  printf (" ENTER YOUR NUMBER = ");
  scanf ("%d",&a);
  while (1)
  {
  a=a/10;
  count=count+1;
  if (a==0)
  {
      printf ("Ans=%d\n",count);
      break;
  }
  }
  }
}
