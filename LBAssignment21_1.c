#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return 1;
        }
    }
}
int main()
{
    int iCnt = 0;
    int *p = NULL;
    int iSize = 0;
    int iValue = 0;
    BOOL bRet = False;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter number\n");
    scanf("%d",&iValue);

    p = (int*) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to alocate memory");
    }

    printf("Enter %d elements :\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iValue);
    if(bRet == True)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is absent");
    }

    free(p);

    return 0;

}