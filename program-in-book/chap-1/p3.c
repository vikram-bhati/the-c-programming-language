/*
https://github.com/vikram-bhati
*/

#include <stdio.h>
// print Fahrenheit Celsius table
int main(int argc, char const *argv[]) {
  float fahr,celsius;
  int lower=0,upper=300,step=20;
  fahr=lower;
  while (fahr <= upper) {
    celsius= 5 * (fahr-32) / 9 ;
    printf("%3.0f\t%6.1f\n",fahr,celsius );
    fahr=fahr+step;
  }


  return 0;
}
