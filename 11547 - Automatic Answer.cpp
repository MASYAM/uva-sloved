#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long t,n;
    long result;

    cin>>t;

    while(t>0)
    {
       cin>>n;

       result = n*567;
       result /= 9;
       result += 7492;
       result *= 235;
       result /= 47;
       result -= 498;
       result %= 100;
       result /= 10;

       cout<<fabs(result)<<endl; // fabs() is for double,abs() is for int and fabsf() is for float
       result = 0;
       n =0;


       t--;
    }

    return 0;
}
