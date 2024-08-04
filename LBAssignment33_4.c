#include<stdio.h>

void Display(int iNo,char ch)
{
    static int i = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if((i <= iNo) && (ch != '\0'))
    {
        printf("%c\t",ch);
        i++;
        ch++;
        Display(iNo,ch);
    }

}
int main()
{
    char ch = '\0';    
    int iValue = 0;
    printf("Enter the charecter : ");
    scanf("%c",&ch);

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue,ch);

    return 0;
}