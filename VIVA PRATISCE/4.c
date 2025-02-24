#include <stdio.h>

int main() {
   int a, d, n;
   float sum = 0;
   
   printf("Enter first term: ");
   scanf("%d", &a);
   
   printf("Enter difference: ");
   scanf("%d", &d);
   
   printf("Enter number of terms: ");
   scanf("%d", &n);
   
   for (int i = 1; i <= n; i++) {
       int t = a + ((i - 1) * d);
       printf("%f  ", 1.0 / t); // Use 1.0 to ensure floating-point division
       sum += 1.0 / t;          // Accumulate the sum with float division
   }
   
   printf("\nSum is %f", sum);
   return 0;
}
