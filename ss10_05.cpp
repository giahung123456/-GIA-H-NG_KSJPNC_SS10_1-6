#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1, mid;
    while(left <= right) {
        mid = left + (right - left) / 2;
        if(arr[mid] == x) {
            return mid;
        }
        if(arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, i, j, temp, x, position;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Mang sau khi sap xep: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    position = binarySearch(arr, n, x);
    if(position != -1) {
        printf("Phan tu %d ton tai o vi tri %d\n", x, position);
    } else {
        printf("Phan tu %d khong ton tai trong mang\n", x);
    }
    
    return 0;
}


