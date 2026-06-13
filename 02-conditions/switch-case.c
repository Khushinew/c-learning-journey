#include<stdio.h>
int main(){
    const char *a;
    int b,c;
    b=4;
    c=5;

    a = b > c ? "Case 1" :  "Case 2";

    printf(a);
}