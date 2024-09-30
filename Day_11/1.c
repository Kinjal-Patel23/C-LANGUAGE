#include <stdio.h>

int main() {
    int n; 

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int length = sizeof(a) / sizeof(a[1]);

    printf("The length of the array is: %d\n", length);
}
