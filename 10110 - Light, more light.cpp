#include<iostream>
#include<math.h>
using namespace std;


int main()
{
     int numOfBulb,caseNumber;

     cin>>caseNumber;

     while(caseNumber)
     {
          cin>>numOfBulb;
          if(numOfBulb <= 4294967296-1 && numOfBulb > 0)
          {
              cout<<"yes"<<endl;
          }else if(numOfBulb == 0)
          {
              cout<<"no"<<endl;
          }

          caseNumber--;
     }

     return 0;

}
