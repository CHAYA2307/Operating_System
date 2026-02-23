#include <stdio.h>
#include <limits.h>

int main() {
    int arr[50], n, i, first, second;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    first = second = INT_MAX;
    for(i = 0; i < n; i++) {
        if(arr[i] < first) {
            second = first;
            first = arr[i];
        } else if(arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }
    printf("Second smallest: %d", second);
    return 0;
}