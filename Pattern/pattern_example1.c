#include <stdio.h>

//(x   x
//   o 
// x   x)

int main() {
    
    int n=3;
    
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(i==j||i+j==4)
            {
                if(i==2&&j==2)
                {
                    printf("o ");
                }
                else
                {
                    printf("x ");
                }
            }
            else
            {
                printf("  ");
            }
        }
    }
    return 0;
}