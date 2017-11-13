/*
    2 - Overloaded Functions to print data
    2 - Overloaded Functions to print data and its central tendencies
    If Argument is a single array and the number of elements, it refers to Ungrouped data
    If Argument is 3 Arrays and the number of intervals, it refers to Grouped data (Lower limit, Upper Limit, Frequency)
    Function does not return anything
*/

#include "stat.hpp"

void PrintData(int D[], int N)            //Ungrouped Data and number of elements as arguments
{
    system("cls");           //To clear the Output Screen
    printf("\n\t\t Data Elements\n\t");
    for(int i = 0; i<N; i++)
        printf("%d\t",D[i]);
    printf("\n");
    system("pause");         //To show output and wait for user interrupt
}

void PrintData(int xl[], int xu[], int freq[], int N)          //Grouped Data Intervals,Frequency and number of elements as arguments
{
    system("cls");           //To clear the Output Screen
    printf("\n \t \t Data Table\n");
    printf("Lower Limit \t Upper Limit \t Frequency\n");
    for(int i = 0; i<N; i++)
    {
        printf("%d \t\t",xl[i]);
        printf("%d \t\t",xu[i]);
        printf("%d \n",freq[i]);
    }
    system("pause");           //To show output and wait for user interrupt
}

void PrintAllData(int D[], int N)          //Ungrouped Data and number of elements as arguments
{
    system("cls");           //To clear the Output Screen
    printf("\n\t\t Data Elements\n\t");
    for(int i = 0; i<N; i++)
        printf("%d\t",D[i]);

    float mean = Mean(D,N);              // This will calculate and print the Mean of Data
    printf("\n\nThe Mean of given data is %f",mean);
    float median = Median(D,N);          // This will calculate and print the Median of Data
    printf("\nThe Median of given data is %f",median);
    float mode = Mode(D,N);              // This will calculate and print the Mode of Data
    printf("\nThe Mode of given data is %f",mode);
    float var = Variance(D,N);        // This will calculate and print the Variance, Standard Deviation and Coefficient of Variance of Data
    float std_dev = sqrt(var);
    printf("\nThe Variance of given data is %f",var);
    printf("\nThe Standard Deviation of given data is %f",std_dev);
    printf("\nThe Coefficient of Variance is %f\n",(std_dev/mean)*100);
    system("pause");                     //To show output and wait for user interrupt
}

void PrintAllData(int xl[], int xu[], int freq[], int N)          //Grouped Data Intervals,Frequency and number of elements as arguments
{
    system("cls");           //To clear the Output Screen
    printf("\n \t \t Data Table\n");
    printf("Lower Limit \t Upper Limit \t Frequency\n");
    for(int i = 0; i<N; i++)
    {
        printf("%d \t\t",xl[i]);
        printf("%d \t\t",xu[i]);
        printf("%d \n",freq[i]);
    }

    float mean = Mean(xl,xu,freq,N);              // This will calculate and print the Mean of Data
    printf("\n\nThe Mean of given data is %f",mean);
    float median = Median(xl,xu,freq,N);          // This will calculate and print the Median of Data
    printf("\nThe Median of given data is %f",median);
    float mode = Mode(xl,xu,freq,N);              // This will calculate and print the Mode of Data
    printf("\nThe Mode of given data is %f",mode);
    float var = Variance(xl,xu,freq,N);        // This will calculate and print the Variance, Standard Deviation and Coefficient of Variance of Data
    float std_dev = sqrt(var);
    printf("\nThe Variance of given data is %f",var);
    printf("\nThe Standard Deviation of given data is %f",std_dev);
    printf("\nThe Coefficient of Variance is %f\n",(std_dev/mean)*100);
    system("pause");           //To show output and wait for user interrupt
}
