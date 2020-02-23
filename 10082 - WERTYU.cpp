#include<iostream>


using namespace std;

int main()
{
     int n,i,a,b,case_no,total;

     while(cin>>n)
     {
         case_no = 0;

         while(n>0)
         {
             case_no++;
             total = 0;

             cin>>a;
             cin>>b;

             for(i=a;i<=b;i++)
             {
                  if(i%2!=0)
                  {
                      total += i;
                  }
             }

             cout<<"Case "<<case_no<<": "<<total<<endl;

             n--;
         }


     }



     return 0;
}


