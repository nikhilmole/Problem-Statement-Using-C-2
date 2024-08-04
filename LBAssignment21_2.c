#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return i;
        }
    }

    return -1; 
}

int main()
{
    int iCnt = 0;
    int *p = NULL; 
    int iValue = 0;
    int iSize = 0;
    int iRet = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &iSize);

    p = (int *) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1; 
    }

    printf("Enter %d elements: \n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the number to find its first occurrence: ");
    scanf("%d", &iValue);

    iRet = FirstOcc(p, iSize, iValue);
    if(iRet == -1)
    {
        printf("There is no such a number");
    }
    else
    {
        printf("First occurance of number is %d", iRet);
    }
    free(p);

    return 0;
}
