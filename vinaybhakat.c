#include <stdio.h>
int main() {}
float arr[5];

for (int i = 0; i < 5; i++){
    printf("Enter element %d: ", i + 1);
    scanf("%f", &arr[i]);
    // Corrected the scanf format specifier
}          

// Printing output
printf ("You entered: ");
for (int 1 = 0; i < 5; 1++) {
    printf("%.2f ", arr[i]);
}

return 0;
