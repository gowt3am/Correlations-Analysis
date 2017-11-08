/*
    2 - Overloaded Functions to print data
    2 - Overloaded Functions to print data and its central tendencies
    If Argument is a single array and the number of elements, it refers to Ungrouped data
    If Argument is 3 Arrays and the number of intervals, it refers to Grouped data (Lower limit, Upper Limit, Frequency)
    Function does not return anything
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include "stat.hpp"

void PrintData(int D, int N)            //Ungrouped Data and number of elements as arguments
{
    system("cls");           //To clear the Output Screen
    printf("\n\t\t Data Elements\n");
    for(int i = 0; i<N; i++)
        printf("%d\t",D[i]);
    printf("\n");
    system("pause");           //To show output and wait for user interrupt
}

void PrintData(int xl[], int xu[], int freq[], int N)          //Grouped Data Intervals,Frequency and number of elements as arguments
{
    system("cls");           //To clear the Output Screen
    printf("\n \t \t Data Table\n");
    printf("Lower Limit \t Upper Limit \t Frequency")
    for(int i = 0; i<N; i++)
    {
        printf("%d \t",xl[i]);
        printf("%d \t",xu[i]);
        printf("%d \n",freq[i])
    }
    system("pause");           //To show output and wait for user interrupt
}

void PrintAllData(int D[], int N)          //Ungrouped Data and number of elements as arguments
{
    system("cls");           //To clear the Output Screen
    printf("\n\t\t Data Elements\n");
    for(int i = 0; i<N; i++)
        printf("%d\t",D[i]);

    Mean(D,N);               // This will calculate and print the Mean of Data
    Median(D,N);             // This will calculate and print the Median of Data
    Mode(D,N);               // This will calculate and print the Mode of Data
    Std_Dev_Var(D,N);        // This will calculate and print the Variance, Standard Deviation and Coefficient of Variance of Data

    system("pause");           //To show output and wait for user interrupt
}

void PrintAllData(int xl[], int xu[], int freq[], int N)          //Grouped Data Intervals,Frequency and number of elements as arguments
{
    system("cls");           //To clear the Output Screen
    printf("\n \t \t Data Table\n");
    printf("Lower Limit \t Upper Limit \t Frequency")
    for(int i = 0; i<N; i++)
    {
        printf("%d \t",xl[i]);
        printf("%d \t",xu[i]);
        printf("%d \n",freq[i])
    }

    Mean(xl,xu,freq,N);               // This will calculate and print the Mean of Data
    Median(xl,xu,freq,N);             // This will calculate and print the Median of Data
    Mode(xl,xu,freq,N);               // This will calculate and print the Mode of Data
    Std_Dev_Var(xl,xu,freq,N);        // This will calculate and print the Variance, Standard Deviation and Coefficient of Variance of Data

    system("pause");           //To show output and wait for user interrupt
}
