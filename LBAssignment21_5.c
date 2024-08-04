#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int i = 0;
    int iPro = 1;

    for(i = 0; i< iLength; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iPro = iPro * Arr[i]; 
        }
    }
    return iPro;
}
int main()
{   
    int iCnt = 0;
    int iRet = 0;
    int *p = 0;
    int iSize = 0;

    printf("Enter number of elements :\n");
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

    iRet = Product(p,iSize);
    printf("Product is : %d",iRet);

    free(p);

    return 0;
}