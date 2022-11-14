#include<string.h>
#include<stdio.h>
void input(char *name)
{
printf("Enter Camel's name:");
scanf("%s",name);

}
int has_nice_name(int count)
{ 
  int n,i;
  n=strlen(name);
  for(i=0;i<n;i++)
    {
      if(name[i]=="a"||name[i]=="e"||name[i]=="i"||name[i]=="0"||name[i]=="u")
      {count1++;}
      else
      {count2++;}
    }
  return count;
}
void output(int res)
{
  if(count1>=2 && count2>=2)
  printf("Camel has a nice name.");
  else
    printf("Camel does not have a nice name");
}
int main()
{
  char name[100]; 
  input(&name);
  
  
}