#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction a;
  printf("enter the fraction one a/b in the form a_b\n");
  scanf("%d%d",&a.num,&a.den);
  return a;
}
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  Fraction a;
  if (((f1.num/f1.den)>(f2.num/f2.den)) && (f1.num/f1.den)>(f3.num/f3.den))
  {
    a=f1;
  }
  else if (f2.num/f2.den > f3.num/f3.den)
  {
    a=f2;
  }
  else 
  {
    a=f3;
  }
  return a;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
  printf("the largest of the fractions %d/%d , %d/%d , %d/%d is %d/%d \n",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
}
int main()
{
  Fraction a,b,c,d;
  a=input_fraction();
  b=input_fraction();
  c=input_fraction();
  d=Largest_fraction(a,b,c);
  output(a,b,c,d);
}