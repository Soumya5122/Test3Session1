#include <stdio.h>
int input_degree()
{
  int n;
  printf("enter the degree of the polynomial\n");
  scanf("%d",&n);
  return n;
}
float input_x()
{
  float n;
  printf("enter the value of x\n");
  scanf("%f",&n);
  return n;
}
void input_coefficients(int n, float a[n])
{
  for (int i=n;i>0;i--)
    {
      printf("enter the coefficient %d\n",i);
      scanf("%f",&a[i]);
    }
}
float evaluate_polynomial(int n, float a[n], float x)
{
  float sum=0;
  for (int i=n;i>0;i--)
    {
      sum=(sum+a[i])*x;
    }
}
void out_put(int n, float a[n], float x, float result)
{
  int i,j=n-1;
  for (i=n;i>1;i--&&j--)
      printf("%.0f*x^%d+",a[i],j);
  printf("%.0f at %f is %f\n",a[i],x,result);
}
int main()
{
  int d;
  d=input_degree()+1;
  float x;
  x=input_x();
  float a[d];
  input_coefficients(d,a);
  float c=evaluate_polynomial(d,a,x);
  out_put(d,a,x,c);
  return 0;
}
