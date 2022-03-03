#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef _fraction Fraction;
int gcd(int a,int b)
{
  int t;
  while (b != 0)
    {
      t=b;
      b=a%b;
      a=t
    }
}
int find_gcd(int a,int b);

