/*
    2 - Overloaded Functions to calculate mean for given data and return it
    If Argument is a single array and the number of elements, it refers to Ungrouped data
    If Argument is 3 Arrays and the number of intervals, it refers to Grouped data (Lower limit, Upper Limit, Frequency)
    Function returns the Mean Value
*/

#include "stat.hpp"

float Mean(int D[], int N)      //Ungrouped Data and number of elements as arguments
{
    float sum = 0, mean;
    for(int i = 0; i<N; i++)
        sum += D[i];

    mean = sum/N;
    return mean;
}

float Mean(int xl[], int xu[], int freq[], int N)      //Grouped Data Intervals,Frequency and number of elements as arguments
{
    float xm[N], sum = 0, mean;
    for(int i = 0; i<N; i++)
        xm[i]=(xl[i]+xu[i])/2;

    for(int i=0;i<N;i++)
        sum += (xm[i]*freq[i]);

    mean = sum/N;
    return mean;
}
