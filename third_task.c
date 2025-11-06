/* Task description:
Write a program, that first asks the user the number of real values to read; then it reads the values into a dynamically allocated array. 
At the end the program should print the elements of the array backwards, and release the allocated memory!
*/


#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  double *p;

  printf("Give how many numbers: ");
  scanf("%d", &n);

  p = (double*)malloc(n*sizeof(double));
  if(p == NULL) return 0;

  for(int i = 0; i < n; i++){
    printf("Give %d-th number: ", i+1);
    scanf("%lf", &p[i]);
  }

  for(int i = n; i >= 0; i--){
    printf("%lf ", p[i-1]);
  }



  return 0;
}
