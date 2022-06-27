#include <stdio.h>

int main() {
   int number_A, number_B;
   printf("Enter the number A: ");
   scanf("%d", &number_A);
   printf("Enter the number B: ");
   scanf("%d", &number_B);

   if (number_A > number_B){
  printf("\nnumber A > number B\n\n");
 }else if (number_A < number_B){
  printf("\nnumber A < number B\n\n");
 }else if (number_A == number_B){
  printf("\nnumber A = number B\n\n");
 }
 else{
  printf("Error!!!\n\n");
 }
 return 0;
}
