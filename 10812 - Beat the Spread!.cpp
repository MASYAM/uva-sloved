#include<iostream>
using namespace std;

int main()
{
    int n,a,b,addition,subtraction;

    while(cin>>n)
    {
          while(n>0)
          {
              cin>>a; cin>>b;

              if(a>=b && (a+b)%2==0)
              {
                  addition = (a+b)/2;
                  subtraction = (a-b)/2;

                  cout<<addition<<" "<<subtraction<<endl;
              }else{
                  cout<<"impossible"<<endl;
              }

              n--;
          }
    }

    return 0;
}
