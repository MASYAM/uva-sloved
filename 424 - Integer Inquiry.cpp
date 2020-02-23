#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main()
{
    long long number[100];
    long long total=0;
    int i=0;

    while(cin>>number[i])
    {
         total += number[i];
         cout<<total;
         i++;
    }

    //cout<<total;

    return 0;
}


