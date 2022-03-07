#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter the fraction one a/b in the form a_b\n");
  scanf("%d%d",num1,den1);
  printf("enter the fraction two a/b in the form a_b\n");
  scanf("%d%d",num2,den2);
}
int gcd(int a,int b)
{
  int t;
    while (b!=0)
      {
        t = b;
        b = a%b;
        a = t;
      }
    return a;
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  int nu,de;
  nu=num1 * den2 + num2 * den1;
  de=den2 * den1;
  *num3=nu/gcd(nu,de);
  *den3=de/gcd(nu,de);
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("the sum of fractions %d/%d and %d/%d is given by %d/%d\n",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int n1,n2,n3,d1,d2,d3;
  input(&n1,&d1,&n2,&d2);
  add(n1,d1,n2,d2,&n3,&d3);
  output(n1,d1,n2,d2,n3,d3);
  return 0;
}
