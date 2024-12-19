#include <stdio.h>
 
void main()
{
    int num[10];
    int i = 0;
    int largest;
    int com, totaltakehome, finalsalary;
         
    while(i < 10)
    {
        printf("Enter salesperson salary for week[%d]:", i + 1);
        scanf("%d", &num[i]);
        com = num[i] / 100 * 7;
        printf("Commision is %d\n", com);
        totaltakehome = 300 + com;
        printf("Total takehome is %d\n", totaltakehome);
        printf("\n");
    }

    largest = num[0];
    i = 0;
    while(i < 10)
    {
        if(num[i] > largest)
        {
            largest = num[i];
        }
        i++;
    }

    printf("\nHighest salary is : %d\n", largest);

//    return 0;
}
