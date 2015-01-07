#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m, j, swap, i;
    char sort[100];
    printf("\n Enter max 100 digits : ");
    scanf("%s",&sort);
    i = strlen(sort);

    for(m=0;m<i-1;m++)
        for(j=0;j<i-1;j++)
            if(sort[j]>sort[j+1])
            {
                swap=sort[j];
                sort[j]=sort[j+1];
                sort[j+1]=swap;
            }

    printf("\n Sort : %s\n",sort);
    return 0;
}
