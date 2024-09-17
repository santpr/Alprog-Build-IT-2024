#include <stdio.h>
#include <stdlib.h>

int bandingkan(const void *x, const void *y) {
    return (*(int*)x - *(int*)y);
}

int main() {
    int jumlah;

    
    scanf("%d", &jumlah);

    int data[jumlah];

   
    for(int j = 0; j < jumlah; j++) {
        scanf("%d", &data[j]);
    }

    
    qsort(data, jumlah, sizeof(int), bandingkan);

    
    for(int j = 0; j < jumlah; j++) {
        printf("%d\n", data[j]);
    }

    return 0;
}
