#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0]; 
    int i = 0;

    for(i = 1; i < iLength; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i]; 
        }
    }
    return iMin;
}

int main()
{
    int iCnt = 0;
    int *p = NULL;
    int iSize = 0;
    int iRet = 0;

    printf("Enter the number of elements:\n");
    scanf("%d", &iSize);

    p = (int*) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Minimum(p, iSize);
    printf("Minimum number is: %d\n", iRet);

    free(p);
    return 0;
}
