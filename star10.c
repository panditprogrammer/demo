//program to print star pattern
#include <stdio.h>
void main()
{
    int rows,i,j,num,r;
    system("cls");
    printf("How many rows you want to print in star pattern ");
    scanf("%d",&rows);
    r= (rows+1)/2;
    for(i=1;i<=rows;i++)
    {
        i<=r?num++:num--;
        for(j=1;j<=rows;j++)
        {
            if(j >= r+1-num && j <= r-1+num)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    system("pause");
}
