#include <stdio.h>
#include <string.h>

void rev(char t[]);

int main(){

    rev("demha");



}

void rev(char t[]){
             int j = strlen(t);
            for(int i = j - 1; i >= 0 ; i--){

                printf("%c",t[i]);
            }

}