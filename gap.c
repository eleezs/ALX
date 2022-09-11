#include <stdio.h>

// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
int solution(int N);

int main() {
  int N;

  printf("Enter a positive integer: ");
  scanf("%d",&N);
  solution(N);
  return 0;
}

int solution (int N) {
   if (N == 0) {
        printf("0");
        return 0;
    }
   
   // Stores binary representation of number.
   int binaryNum[32]; // Assuming 32 bit integer.
   int i=0;
   
   for ( ;N > 0; ){
      binaryNum[i++] = N % 2;
      N /= 2;
   }
   
   // Printing array in reverse order.
   for (int j = i-1; j >= 0; j--)
      printf("%d", binaryNum[j]);

  //convert to string
}
