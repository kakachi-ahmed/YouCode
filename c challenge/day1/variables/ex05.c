#include <stdio.h>


int main(){

 int num , a ,b ,c ,d,e , rev;

    printf("enter num : ");
    scanf("%d",&num);

    a = num / 10000;
    b = (num / 1000)%10;
    c = (num/ 100)% 10;
    d = (num / 10 )%10;
    e = num %10;

    rev= e*10000+d*1000+c*100+b*10+a;
    
    printf("%d",rev);
}