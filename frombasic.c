
//why we are using c++ insted of c 
// to man
#include<stdio.h>
#include<math.h>
int main ()
{
  int a = -5;
  float b = -45.67;
  long int c = -67876887;
  printf("\nabsolute value of %d is %d",a,abs(a));
  printf("\nabsolute value of %f is %f",b,fabs(b));
  printf("\nabsolute value of %ld is %ld",c,labs(c));
  
}