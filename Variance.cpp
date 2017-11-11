/*
    2 - Overloaded Functions to calculate variance for given data and returns it
    If Argument is a single array and the number of elements, it refers to Ungrouped data
    If Argument is 3 Arrays and the number of intervals, it refers to Grouped data (Lower limit, Upper Limit, Frequency)
    Function returns the Variance Value
*/

#include "stat.hpp"

float Variance(int D[],int N)          //NOT CHECKED
{
    float mean;
    int i;
    mean=Mean(D,N);
    float sum=0;
    for(i=0;i<N;i++)
        sum+=(D[i]-mean)*(D[i]-mean);
    float v=sum/N;
    return v;
}

float Variance(int xl[],int xu[],int freq[],int N)     //NOT CHECKED
{
    float xm[N];
    int i;
    float mean = Mean(xl,xu,freq,N);
    for(i=0;i<N;i++)
        xm[i]=(xl[i]+xu[i])/2;
    float sum=0;
    for(i=0;i<N;i++)
        sum+=((xm[i]-mean)*(xm[i]-mean))*freq[i];
    float v=sum/N;
    return v;
}
