#include<stdio.h>
void input_string(char *a)
{
  printf("enter the string value\n");
  scanf("%s",a);
}
int count_words(char *string)
{
  int j;
  for(int i=0;string[i]!=0 && string[j]!=0;i++)
    {
      if(string[i]==string[j])
      {
        return i-j;
      }
    
      else
        j=0;
      }
  return j;
}
void output(char *string,int no_words)
{
  printf("%s=%d",string,no_words);
}
int main()
{
  char a[30],string[40];
  int no_words;
  input_string(a);
  no_words=count_words(string);
  output(string,no_words);
  return 0;
}