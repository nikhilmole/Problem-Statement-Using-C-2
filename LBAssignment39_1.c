#include <stdio.h>

int countOnBits(unsigned int num) {
    int count = 0;
    while (num) 
    {
        count += num & 1;
        num >>= 1;        
    }
    return count;
}

int main() 
{
    unsigned int number = 0;
    
    printf("Enter a number: ");
    scanf("%u", &number);
    
    int result = countOnBits(number);
    printf("The number of ON (1) bits in %u is: %d\n", number, result);
    
    return 0;
}
