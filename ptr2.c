#include <stdio.h>
int main(){

int n= 1025;
char *ptr;
ptr= &n;

printf("&n: %d, n: %d\n" , &n ,n);

printf("ptr: %d, *ptr: %d\n" , ptr , *ptr);
ptr++;
printf("ptr: %d, *ptr: %d\n" , ptr , *ptr);









return 0;
}