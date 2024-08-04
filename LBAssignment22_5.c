#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[], int iLength)
{
    int i = 0;
    int iDigitSum = 0; 

    while(i < iLength)
    {
        int num = Arr[i];
        iDigitSum = 0;
        while (num != 0)
        {
            iDigitSum += num % 10;
            num = num / 10;
            
        }
        printf("%d\t", iDigitSum);
        i++;
    }
}

int main()
{
    int iCnt = 0;
    int *p = NULL;
    int iSize = 0;
    
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
    
    DigitSum(p, iSize);

    free(p);

    return 0; 
}
