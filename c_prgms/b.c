#include<stdio.h>

int main(){
    int m, i;
    long long int total = 0; 

    scanf("%d", &m);

    int arr[m];
    for(i=0; i<m; i++){
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for(i=0; i<m; i++){
        printf("%lld ", total-arr[i]);
    }

    return 0;
}

