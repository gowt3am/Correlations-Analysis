/*
    2 - Overloaded Functions to calculate mode and return it
    If Argument is a single array and the number of elements, it refers to Ungrouped data
    If Argument is 3 Arrays and the number of intervals, it refers to Grouped data (Lower limit, Upper Limit, Frequency)
    Function returns the Mode Value
*/

#include "stat.hpp"

float Mode(int D[], int N)      //NOT CHECKED
{
	int i,j,pos = 0,coun;
	int s[N];
	for(i=0;i<N;i++)
    {
        s[i] = 0;
		coun=0;
		for(j=0;j<N;j++)
        {
			if(D[i]==D[j])
			  coun++;
		}
		s[i]=coun;
	}
	int temp=s[0];
	for(i=1;i<N;i++)
	{
		if(temp<s[i])
		{
			temp=s[i];
			pos=i;
		}
	}
	return D[pos];
}

float Mode(int xl[], int xu[], int freq[], int N)        //NOT CHECKED
{
	int i,maxi,pos,lm,d1,d2;
	maxi=freq[0];
	float mode,cw;
	cw=xu[0]-xl[0];
	for(i=0;i<N;i++)
    {
		if(maxi<freq[i])
		{
			maxi=freq[i];
			pos=i;
		}
	}
	lm=xl[pos];
	d1=freq[pos]-freq[pos-1];
	d2=freq[pos]-freq[pos+1];
	mode=lm + (d1/(d1+d2))*cw;
	return mode;
}
