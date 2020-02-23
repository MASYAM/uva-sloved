#include<iostream>

using namespace std;


int main()
{
     int n,i,numberOfSet=1,numberOfMove=0,numberOfBlocks[52],total=0,AvgBlocks=0;

     while(cin>>n && n!= 0)
     {
          for(i=0;i<n;i++)
          {
             cin>>numberOfBlocks[i];

          }

          for(i=0;i<n;i++)
          {
             total = total + numberOfBlocks[i];
          }

          AvgBlocks = total/n;

          for(i=0;i<n;i++)
          {
             if(numberOfBlocks[i] > AvgBlocks)
             {
                numberOfMove = numberOfMove + (numberOfBlocks[i] - AvgBlocks);
             }
          }

          cout<<"Set #"<<numberOfSet<<endl;
          cout<<"The minimum number of moves is "<<numberOfMove<<"."<<endl<<endl;

          numberOfMove=0;
          total = 0;
          numberOfSet++;
     }

     return 0;
}
