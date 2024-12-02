#include <stdio.h>

int main() {
    int n, i, j, minIndex, temp;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n-1; i++) {
        minIndex = i;
        for(j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    
    printf("Mang sau khi sap xep: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}