/*
    2 - Overloaded Functions to calculate mode and return it
    If Argument is a single array and the number of elements, it refers to Ungrouped data
    If Argument is 3 Arrays and the number of intervals, it refers to Grouped data (Lower limit, Upper Limit, Frequency)
    Function returns the Mode Value
*/

#include "stat.hpp"

float Mode(int D[], int N)      //NOT CHECKED
{
	int i,j,pos,k,count;
	int s[N],f;
	for(i=0;i<N;i++)
    {
		k=D[i];
		count=0;
		for(j=0;j<N;j++)
        {
			if(D[i]==D[j])
			  count++;
		}
		s[i]=count;
	}
	int temp=s[0];
	for(i=0;i<N;i++)
	{
		if(temp<s[i])
		{
			temp=s[i];
			pos=i;
		}
	}
	f=D[pos];
	return f;
}

float Mode(int xl[], int xu[], int freq[], int N)        //NOT CHECKED
{
	int i,max,pos,lm,d1,d2;
	max=freq[0];
	float mode,cw;
	cw=xu[0]-xl[0];
	for(i=0;i<N;i++)
    {
		if(max<freq[i])
		{
			max=freq[i];
			pos=i;
		}
	}
	lm=xl[pos];
	d1=freq[pos]-freq[pos-1];
	d2=freq[pos]-freq[pos+1];
	mode=lm+(d1/(d1+d2))*cw;
	return mode;
}
