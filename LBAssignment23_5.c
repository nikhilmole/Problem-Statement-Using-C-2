#include<stdio.h>

void DisplaySchedule(char ch)
{
    if(ch < 'a')
    {
        switch (ch)
        {
            case 'A':
            printf("Exam of division A at 7AM");
            break;

            case 'B':
            printf("Exam of division B at 8.30AM");
            break;

            case 'C':
            printf("Exam of division C at 9.30AM");
            break;

            case 'D':
            printf("Exam of division D at 10.30AM");
            break;

            default:
            printf("Please enter correct division");
        }
    }
    else
    {
        printf("Please enter only capital division");
    }

}
int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}