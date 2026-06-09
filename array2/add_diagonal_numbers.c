//11 21 6
//7  8  10
//4  9  32
//add diagonal values


#include <stdio.h>

int main()
{
    int n=4;
    int d1=0,d2=0;
    int a[4][4]={{10,20,30,40},
                 {50,60,70,80},
                 {90,11,12,13},
                 {14,15,16,17}};
    
    for(int i=0;i<n;i++)
    {        
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                d1=d1+a[i][j];
            }
            if(i+j==n-1)
            {
                d2=d2+a[i][j];
            }
        }
    }
    printf("Diagonal 1 sum is %d\n",d1);
    printf("Diagonal 2 sum is %d\n",d2);

    return 0;
}