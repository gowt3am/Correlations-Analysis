/*
    2 - Overloaded Functions to calculate median for given data and return it
    If Argument is a single array and the number of elements, it refers to Ungrouped data
    If Argument is 3 Arrays and the number of intervals, it refers to Grouped data (Lower limit, Upper Limit, Frequency)
    Function returns the Median Value
*/

#include "stat.hpp"

float Median(int D[],int N)
{
    float median;
	if(N%2!=0)
		median=D[(N-1)/2];
	else
		median=(D[N/2]+D[(N/2)+1])/2;
	return median;
}

float Median(int xl[], int xu[], int freq[], int N)        //NOT CHECKED
{
	float k,median;
	int i,j,pos,s;
	float cf[N];
	int cw;
	float F,fm,lm;
	cw=xu[0]-xl[0];
	for(i=0;i<N;i++){
		float sum=0;
		for(j=0;j<=N;j++){
			sum=sum+freq[j];
		}
		cf[i]=sum;
	}
	k=N/2;
	for(i=0;i<N;i++){
		if(cf[i]>=k){
			pos=i-1;
			s=i;
			break;
		}
	}
	F=cf[pos];
	fm=freq[s];
	lm=xl[s];
	median = lm + (((k-F)*cw)/fm);
	return median;
}
