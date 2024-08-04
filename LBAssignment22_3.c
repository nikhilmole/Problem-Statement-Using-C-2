#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i = 0;
    int iDif = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
        else if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    iDif = iMax - iMin;
    return iDif;
}
int main()
{
    int iCnt= 0;
    int *p = NULL;
    int iRet = 0;
    int iSize = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    p = (int*) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memrory");
        return -1;
    }

    printf("Enter %d elements :\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Digfference is :%d",iRet);

    free(p);

    return 0;
}