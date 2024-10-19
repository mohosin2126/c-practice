#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // Correct way to declare an array of size n
    int a[n];
    
    // Reading values into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Access the last element
    printf("%d\n", a[n - 1]); 
    
    // Print all elements in the array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
