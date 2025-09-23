#include <stdio.h>

int main(){
    float x = 4.0; 
    float y = 3.0;
  float pi = 3.14;
  int r ;
  printf("entrer le rayon de la sphere: ");
  scanf("%d", &r);
  int r3 = r * r * r;

  float v = x/y * pi * r3;


  printf("Volume est: %f \n", v);

    return 0;
}