#include<iostream>

using namespace std;




int main()
{
        long i = 0,j,nth_uglyNumber=0,result,found;


         while(true)
         {
                 i++;
                 found = 0;

                 for(j=2;j<i;j++)
                 {
                     if(j==2 || j==3 ||j==5)
                     {
                         if(i%j==0)
                         {
                             found = 1;
                         }
                     }else{

                         if(i%j==0)
                         {
                             found = 0;
                             break;
                         }
                     }
                 }
                 cout<<nth_uglyNumber;
                 if(found==1)
                 {
                     nth_uglyNumber++;
                 }

                 if(nth_uglyNumber == 6)
                 {
                     cout<<"The 1500'th ugly number is "<<i<<"."<<endl;
                     break;
                 }

         }

         return 0;
}
