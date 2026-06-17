#include <stdio.h>
#include <string.h>

int main() {
    char x[]="maharashtra";
    int len = strlen(x);

    // for (int i=0; i<len; i++) {
    //     printf("%c", x[i]);
    // }

    for(int i=len-1; i>=0; i--){
        printf("%c", x[i]);
    }

    return 0;
}