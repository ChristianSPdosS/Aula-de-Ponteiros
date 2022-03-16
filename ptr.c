#include <stdio.h>

int main(void){

  
//int x=5;
  //int *ptr= &x;

//printf("&x: %d, x: %d\n" , &x, x);
  //printf("&ptr: %d, ptr: %d, *ptr: %d\n" , &ptr , ptr , *ptr);

//printf("tamanho de char: %d bytes\n" , sizeof(char));
  //printf("tamanho de int: %d bytes\n ", sizeof(int));
  //printf("tamanho do float: %d bytes\n" , 
//sizeof(float));
    
  //printf("tamanho do double: %d bytes\n" , sizeof(double)); 

  char a= 'Z';
 int n= 10;
  float pi= 3.1415;

  char *ptr_a;
  ptr_a= &a;

  int *ptr_n;
  ptr_n= &n;

  float *ptr_pi;
  ptr_pi= &pi;

  printf("&a: %d, a: %c\n", &a, a);
  printf("&n: %d, n: %d\n", &n, n);
  printf("&pi: %d, pi: %f\n", &pi, pi);

  printf("&ptr_a: %d, ptr_a: %d, *ptr_a: %c\n" , &ptr_a, ptr_a, *ptr_a);
   printf("&ptr_n: %d, ptr_n: %d, *ptr_n: %d\n" , &ptr_n, ptr_n, *ptr_n);
   printf("&ptr_pi: %d, ptr_pi: %d, *ptr_pi: %f\n" , &ptr_pi, ptr_pi, *ptr_pi);
  
  
  


  return 0;
}