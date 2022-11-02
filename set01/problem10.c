#include<string.h>
#include<stdio.h>
void input_two_strings(char *string1, char *string2)
{
  printf("Enter a first string :");
scanf("%s",string1);
printf("Enter a second string :");
scanf("%s",string2);
}
int stringcompare(char *string1, char *string2)
{
  int result;
  result = strcmp(string1,string2);
  return result;
}
void output(char *string1, char *string2, int result)
{
  if (result=0)
  printf("%s is equal to %s\n",string2,string1);
  else if(result>0)
  printf("%s is greater than %s\n",string1,string2);
  else 
  printf("%s is greater than %s\n",string2,string1);
}

int main()
{
int a;
char s1[100], s2[100];
input_two_strings(&s1, &s2);
a = stringcompare(&s1, &s2);
output(&s1, &s2,a);
return 0;
}