/*
    1 - Function to swap variables
    2 - Overloaded Functions to accept data from user
    If Argument is a single array, it is used to accept Ungrouped data
    If Argument is 3 Arrays, it is used to accept lower limit, upper limit and frequency of different intervals
    Function returns an int, which is the number of elements/intervals accepted from user
*/

#include <iostream>
#include <stdio.h>
#include "stat.hpp"

void SwapNum(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int GetData(int D[])    //Ungrouped Data Array as Argument
{
    system("cls");           //To clear the Output Screen
    int N;
    printf("\nEnter number of elements:(max 32000)");
    scanf("%d",&N);
    printf("Enter the data elements\n");
    for(int i = 0; i<N; i++)
        scanf("%d",&D[i]);

    for(int i = 0; i<N-1; i++)                      //Sorting the Data Elements in Ascending Order
    {
        int min = D[i];
        int pos = i;
        for(int j = i; j<N; j++)
        {
            if(min > D[j])
            {
                min = D[j];
                pos = j;
            }
        }
        SwapNum(&D[i],&D[pos]);
    }

    PrintData(D,N);            //Printing the Final Data
    system("pause");           //To show output and wait for user interrupt
    return N;
}

int GetData(int xl[], int xu[], int freq[])          //Grouped Data Intervals and their frequencies as Arguments
{
    system("cls");           //To clear the Output Screen
    int N;
    printf("\nEnter number of intervals: (max 32000)");
    scanf("%d",&N);
    printf("Enter the lower limit, upper limit and frequency of intervals (Interval is exclusive of Upper Limit)(Ensure no overlapping intervals)\n");
    for(int i = 0; i<N; i++)
        scanf("%d%d%d",&xl[i],&xu[i],&freq[i]);

    for(int i = 0; i<N-1; i++)                      //Sorting the Data Intervals in Ascending Order
    {
        int min = xl[i];
        int pos = i;
        for(int j = i; j<N; j++)
        {
            if(min > xl[j])
            {
                min = xl[j];
                pos = j;
            }
        }
        SwapNum(&xl[i],&xl[pos]);
        SwapNum(&xu[i],&xu[pos]);
        SwapNum(&freq[i],&freq[pos]);
    }

    PrintData(xu,xl,freq,N);
    system("pause");           //To show output and wait for user interrupt
    return N;
}
