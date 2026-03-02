#include <stdio.h>
#include <limits.h>

int main() {
    int m;
    printf("enter the size of array");
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }

    int n = sizeof(arr)/sizeof(arr[0]);
    int first = INT_MAX, second = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < first) {
            second = first;
            first = arr[i];
        } else if(arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == INT_MAX)
        printf("No second smallest element.\n");
    else
        printf("Second smallest element: %d\n", second);

    return 0;
}
