#include <stdio.h>

int main() {

    int n;
    float average, sum;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);

        sum = sum + a[i];  
        average = sum / n; 
    }

    printf("Average of an array: %.1f",average);

}
