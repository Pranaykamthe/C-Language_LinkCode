#include <stdio.h>
// print vowel in a string
// print count of even character in a string 
// print even character in a string
// print odd character in a string and count of odd character in a string
// change character a to x in a string

int main() {
    char x[]="education";
    int count=0;
    printf("%s",x);
    printf("\nVowel in the string: ");
    for(int i=0; x[i]!='\0'; i++) {
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' || 
           x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U') {
            printf("%c ",x[i]);
        }
    }
    printf("\nEven character in the string: ");
    for(int i=0; x[i]!='\0'; i++) {
        if(i%2==0) {
            printf("%c ",x[i]);
            count++;
        }
    }
    printf("\nCount of even characters in the string: %d", count);

    printf("\nOdd character in the string: ");
    int odd_count = 0;
    for(int i=0; x[i]!='\0'; i++) {
        if(i%2==1) {
            printf("%c ",x[i]);
            odd_count++;
        }
    }
    printf("\nCount of odd characters in the string: %d", odd_count);

    printf("\nString after changing character a to x: ");
    for(int i=0; x[i]!='\0'; i++) {
        if(x[i]=='a') {
            x[i]='x';
        }
        printf("%c",x[i]);
    }


    
    
    return 0;
}