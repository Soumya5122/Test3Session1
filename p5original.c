#include<stdio.h>
#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{ int i;  
  for(i=0;i<n;i++)
  {
  printf("enter the array element %d\n",i);
  scanf("%d",&a[i]);
  }
}
int find_largest(int n, int a[n])
{ 
  int i,largest=0;
  for(i = 0;i<n;i++)
   if (a[i] > a[largest])
      largest = i;
  return largest;
}
void out_put(int n, int a[n], int largest)
{
printf("Largest element is present at index %d and its value is %d.\n",largest,a[largest]);
}
int main()
{
  int largest,n;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  largest=find_largest(n,a);
  out_put(n,a,largest);
  return 0;
}