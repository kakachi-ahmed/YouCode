// V= 4/3 x Pi  x r3
// Pi=3.14 ;  r=10
#include <stdio.h>

int main(){
    float x = 4.0; 
    float y = 3.0;
  float pi = 3.14;
  int r = 10;
  int r3 = r * r * r;

  float v = x/y * pi * r3;
//   float v = 4/3 * pi * r3;

  printf("Volume est: %f \n", v);
  printf("4/3= %i\n", 4/3);
  printf("4.0/3.0= %f", 4.0f/3.0f);





    return 0;
}