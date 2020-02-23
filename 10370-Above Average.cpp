#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;


int main()
{
    int n,i,j;
    double numbers[1005],total=0,counter=0;
    double result,avg;

    cin>>n;

    while(n>0)
    {
        cin>>i;

        for(j=0;j<i;j++)
        {
            cin>>numbers[j];
        }

        for(j=0;j<i;j++)
        {
            total += numbers[j];
        }

        avg = total/i;

        for(j=0;j<i;j++)
        {
            if(numbers[j] > avg)
            {
                counter++;
            }
        }

        result = ceil(counter*100)/i;

        printf("%.3f",result);
        cout<<"%"<<endl;

        result = 0;
        counter = 0;
        total = 0;

        n--;
    }

    return 0;
}
