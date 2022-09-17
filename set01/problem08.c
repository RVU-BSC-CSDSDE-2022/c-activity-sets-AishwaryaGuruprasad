#include <stdio.h>

int input_array_size()
{ int n;
  printf("Enter the numbers of variables you wish to find the sum of:/n");
  scanf("%d",n);
    return n;
}
void input_array(int n, int a[n])
{
  printf("Enter the %d numbers you wish to find the sum of:",n);
  for(int i=0,i<=n,i++)
    scanf("%d",a[i]);
}
int sum_n_array(int n, int a[n])
{ int sum=0;
  for(int i=0,i<n,i++)
    { sum=sum+a[i];}
    
  return sum;
   
}
void output(int n, int a[n],int sum)
{
  printf("The sum of the numbers of the array of size %d is %d",n,sum);
  for(int i=0;i<=n;i++)
    {print("%d",a[i]);}
  }

int main()
{ int n;
  int a[n];
  int sum;
	int n = input_array_size ();
	input_array(n,a);
   sum = sum_n_array(n,a);
	output(n,a,sum);
	return 0;
}
