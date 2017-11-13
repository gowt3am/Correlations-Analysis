/*
    Example Program
    Asks user if data is grouped or ungrouped
    Will Accept data at beginning by default
    Displays a menu of choices to print data and/or various central tendencies
    Exits the loop when user enters "0"
*/

#include "stat.hpp"

int main()
{
    system("cls");
    char type, ch;
    float var, mean;
    int D[32001],xl[32001],xu[32001],freq[32001],N;
    printf("What type of data do you want to deal with?(U for Ungrouped & G for Grouped)");
    scanf("%c",&type);
    switch(type)
    {
        case 'u':
        case 'U':
            N = GetData(D);
            mean = Mean(D,N);
            var = Variance(D,N);
            do
            {
                ch = DispMenu();
                switch(ch)
                {
                    case 1: PrintData(D,N);
                            break;
                    case 2: printf("\n\n The Mean of given data is %f\n",mean);
                            system("pause");
                            break;
                    case 3: printf("\n\n The Median of given data is %f\n",Median(D,N));
                            system("pause");
                            break;
                    case 4: printf("\n\n The Mode of given data is %f\n",Mode(D,N));
                            system("pause");
                            break;
                    case 5: printf("\n\n The Variance of given data is %f\n",var);
                            system("pause");
                            break;
                    case 6: printf("\n\n The Standard Deviation of given data is %f\n",sqrt(var));
                            system("pause");
                            break;
                    case 7: printf("\n\n The Coefficient of Standard Variance is %f\n", (sqrt(var)/mean * 100));
                            system("pause");
                            break;
                    case 8: PrintAllData(D,N);
                            break;
                    case 0: exit(0);
                    default: printf("\n\n Incorrect Option! Retry!\n");
                             system("pause");
                             break;
                }
            }while(ch != 0);
            break;

        case 'g':
        case 'G':
            N = GetData(xl,xu,freq);
            var = Variance(xl,xu,freq,N);
            mean = Mean(xl,xu,freq,N);
            do
            {
                ch = DispMenu();
                 switch(ch)
                 {
                    case 1: PrintData(xl,xu,freq,N);
                            break;
                    case 2: printf("\n\n The Mean of given data is %f\n",mean);
                            system("pause");
                            break;
                    case 3: printf("\n\n The Median of given data is %f\n",Median(xl,xu,freq,N));
                            system("pause");
                            break;
                    case 4: printf("\n\n The Mode of given data is %f\n",Mode(xl,xu,freq,N));
                            system("pause");
                            break;
                    case 5: printf("\n\n The Variance of given data is %f\n",var);
                            system("pause");
                            break;
                    case 6: printf("\n\n The Standard Deviation of given data is %f\n",sqrt(var));
                            system("pause");
                            break;
                    case 7: printf("\n\n The Coefficient of Standard Variance is %f\n", (sqrt(var)/mean * 100));
                            system("pause");
                            break;
                    case 8: PrintAllData(xl,xu,freq,N);
                            break;
                    case 0: exit(0);
                    default: printf("\n\n Incorrect Option! Retry!\n");
                             system("pause");
                             break;
                }
            }while(ch != 0);
            break;

        default:
            printf("\n\nWrong Choice!! Quitting!\n");
            system("pause");
            break;
    }
    return 0;
}
