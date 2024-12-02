#include <stdio.h>

int main() {
    int n, i, x, found = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            printf("Phan tu %d ton tai o vi tri %d\n", x, i);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("Phan tu %d khong ton tai trong mang\n", x);
    }
    
    return 0;
}


