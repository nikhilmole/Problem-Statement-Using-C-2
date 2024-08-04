#include <stdio.h>

void displayCommonOnBitsPositions(unsigned int num1, unsigned int num2) 
{
    unsigned int commonBits = num1 & num2; 
    unsigned int position = 1;             
    printf("Common ON bit positions: ");
    
    while (commonBits)
    {
        if (commonBits & 1) 
        {
            printf("%u ", position); 
        }
        commonBits >>= 1;  
        position++;      
    }
    printf("\n");
}

int main()
{
    unsigned int number1 = 0, number2 = 0;
    
    printf("Enter the first number: ");
    scanf("%u", &number1);
    
    printf("Enter the second number: ");
    scanf("%u", &number2);
    
    displayCommonOnBitsPositions(number1, number2);
    
    return 0;
}
