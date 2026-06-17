#include <stdio.h>
#include <string.h>

//with function

// int main() {
//     char str1[] = "ABC";
//     char str2[]= "ABD";
//     int ans = strcmp(str1, str2);
//     printf("%d", ans);
//     return 0;
// }

//without function

// int main() {
//     char str1[] = "ABC";
//     char str2[]= "ABD";
    
//     for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
//         if (str1[i] != str2[i]) {
//             printf("%d", str1[i] - str2[i]);
//             return 0;
//         }
//     }

//     // check both strings are same or not
//     // if (strlen(str1) == strlen(str2)) {
//     //     printf("0");
//     // } else {
//     //     printf("%d", strlen(str1) - strlen(str2));
//     // }
    
//     return 0;
// }


int main()
{
    char str1[] = "ABC";
    char str2[] = "ABD";

    int flag = 1;

    if(strlen(str1) == strlen(str2))
    {
        for(int i = 0; i < strlen(str1); i++)
        {
            if(str1[i] != str2[i])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            printf("equal");
        else
            printf("not equal");
    }
    else
    {
        printf("not equal");
    }

    return 0;
}