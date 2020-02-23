#include<iostream>


using namespace std;

int main()
{

      int n,i,j,k,amplitude,frequency;

      cin>>n;

      while(n>0)
      {

                 cin>>amplitude;
                 cin>>frequency;

                  for(i=0;i<frequency;i++)
                  {
                         for(j=1;j<=amplitude;j++)
                         {
                               for(k=1;k<=j;k++)
                               {
                                    cout<<j;
                               }
                               cout<<endl;
                         }

                         for(j=amplitude-1;j>=1;j--)
                         {
                               for(k=j;k>=1;k--)
                               {
                                    cout<<j;
                               }
                               cout<<endl;
                         }
                         if(i!=frequency-1)
                         cout<<endl;

                  }
                  if(n!=1)
                 cout<<endl;
                 n--;

      }

      return 0;
}
