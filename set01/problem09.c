#include <stdio.h>
#include<math.h>

float input()
{
  float n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
float square_root(float n)
{
  float sqrroot;
  sqrroot =sqrt(n);
  return sqrroot;
}
void output(float n, float sqrroot)
{
  printf("The squareroot of %d is %d ", n, sqrroot);
}
float main()
{
  float n, sqr;
  n=input();
  sqr=square_root(n);
  output(n,sqr);
}