#include <stdio.h>
#include <string.h>


void bandingkan_string(const char *str1, const char *str2) {
    
    if (strlen(str1) != strlen(str2)) {
        printf("BERBEDA\n");
    } 
    
    else if (strcmp(str1, str2) == 0) {
        printf("IDENTIK\n");
    } 
    
    else {
        printf("MIRIP\n");
    }
}

int main() {
    char pertama[101], kedua[101];

    
    scanf("%100s", pertama);

    
    scanf("%100s", kedua);

    
    bandingkan_string(pertama, kedua);

    return 0;
}
