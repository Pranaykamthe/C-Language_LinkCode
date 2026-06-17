#include <stdio.h>
#include <string.h>

// int main() {
//     char str1[]="hello";
//     char str2[100];
    
//     // strcpy(str2, str1);
//     // printf("str1: %s\n", str1);
//     // printf("str2: %s\n", str2);
    
//     for(int i=0; str1[i]!='\0'; i++) {
//         str2[i] = str1[i];
//     }
//     str2[strlen(str1)] = '\0';
//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2); 
    

//     return 0;
// }

int main() {
    char str1[]="hello";
    char str2[100];
    
    int len = strlen(str1);
    for(int i=0; i<len; i++) {
        str2[i] = str1[i];
    }
    str2[len] = '\0';
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    

    return 0;
}