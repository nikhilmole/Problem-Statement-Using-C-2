#include<stdio.h>
#include<stdlib.h>

int LastOcc (int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i = iLength; i >= 0; i--)
    {
        if(Arr[i] == iNo)
        {
            return i ;
        }
    }
    return -1;
}
int main()
{
    int iCnt = 0;
    int *p = NULL;
    int iSize = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number of elements\n");
    scanf("%d",&iSize);

    p = (int*) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
    }

    printf("Enter %d elements :\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    printf("Enter numbers you want to search last occurance :\n");
    scanf("%d",&iValue);

    iRet = LastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }   
    else
    {
        printf("Last occurance of number is %d",iRet);
    }

    free(p);
    return 0;
}