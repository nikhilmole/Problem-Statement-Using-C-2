#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;
    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] > iStart) && (Arr[i] < iEnd))
        {
            printf("%d\t",Arr[i]);
        }
    }
}
int main()
{
    int iCnt = 0;
    int *p = NULL;
    int iSize = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter the starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter the end point :\n");
    scanf("%d",&iValue2);

    p = (int *) malloc (iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate the memory");
    }

    printf("Enter %d Elements :\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Range(p,iSize,iValue1,iValue2);

    free(p);

    return 0;
}