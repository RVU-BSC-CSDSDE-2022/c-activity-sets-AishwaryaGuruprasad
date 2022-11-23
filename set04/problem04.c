#include<stdio.h>
int input()
{ int n ;
 printf("Enter n");
 scanf("%d",n); 
}
int find_fibo(int n)
{
    int t1,t2,fibo;
    t1=0;t2=1;
    for (i = 3; i <= n; ++i) 
    {
    printf("%d, ",fibo);
    t1 = t2;
    t2 = fibo;
    fibo = t1 + t2;
      }
    
  return fibo;
}
/*void output(int n, int fibo)
{
  for(int i=0;i<n;i++)
    printf("%d",a[i]);
}*/
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  
}