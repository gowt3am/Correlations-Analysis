#include <iostream>
#include <stdio.h>
#include <stdlib.h>    //For system commands
#include <math.h>
#include <process.h>   //For exit commands

void SwapNum(int *, int *);
int DispMenu(void);

int GetData(int []);
int GetData(int [], int [], int []);

void PrintData(int [], int);
void PrintData(int [], int [], int [], int);

void PrintAllData(int [], int);
void PrintAllData(int [], int [], int [], int);

float Mean(int [], int);
float Mean(int [], int [], int [], int);

float Median(int [], int);
float Median(int [], int [], int [], int);

float Mode(int [], int);
float Mode(int [], int [], int [], int);

float Variance(int [], int);                   //Returns only Variance Value, but calculations can be done to get
float Variance(int [], int [], int [], int);   //Standard Deviation, Coefficient of Standard Deviation
