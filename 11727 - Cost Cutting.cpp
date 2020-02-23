#include<iostream>

using namespace std;

int main()
{
     int N,i,j,salary[3],k;

     while(cin>>N)
     {
         k =0;
         while(N>0)
         {
             k++;
               for(i=0;i<3;i++)
               {
                   cin>>salary[i];
               }

               i=0;

                   if((salary[i] < salary[i+1] && salary[i] > salary[i+2]) || (salary[i] > salary[i+1] && salary[i] < salary[i+2]))

                     cout<<"Case "<<k<<": "<<salary[i]<<endl;

                   if((salary[i+1] < salary[i] && salary[i+1] > salary[i+2]) || (salary[i+1] > salary[i] && salary[i+1] < salary[i+2]) )

                     cout<<"Case "<<k<<": "<<salary[i+1]<<endl;

                   if((salary[i+2] < salary[i] && salary[i+2] > salary[i+1]) || (salary[i+2] > salary[i] && salary[i+2] < salary[i+1]))

                     cout<<"Case "<<k<<": "<<salary[i+2]<<endl;


           N--;
         }
     }

     return 0;
}
