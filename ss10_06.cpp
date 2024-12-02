#include <stdio.h>

int main() {
    int n, i, x, count = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n], positions[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            positions[count] = i;
            count++;
        }
    }
    
    if(count > 0) {
        printf("Phan tu %d ton tai o cac vi tri: ", x);
        for(i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang\n", x);
    }
    
    return 0;
}