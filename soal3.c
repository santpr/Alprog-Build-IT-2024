#include <stdio.h>
#include <math.h>


int cek_prima(long long num) {
    if (num <= 1) return 0;   
    if (num == 2) return 1;   
    if (num % 2 == 0) return 0;  

    
    for (long long divisor = 3; divisor <= sqrt(num); divisor += 2) {
        if (num % divisor == 0) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    long long angka;

    
    scanf("%lld", &angka);

    
    if (cek_prima(angka)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}
