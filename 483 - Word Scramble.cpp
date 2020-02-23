#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{

    string sentence;
    int i,j,temp=0;

    while(getline(cin,sentence) )
    {
        for(i=0;i<sentence.length();i++)
        {
            if(sentence[i] == ' ')
            {
                for(j=i-1;j>=temp;j--)
                {
                    cout<<sentence[j];
                }
                cout<<" ";

                temp = i+1;
            }else if(i == sentence.length()-1)
            {
               for(j=i;j>=temp;j--)
                {
                    cout<<sentence[j];
                }

                temp = i+1;
            }
        }
        temp = 0;
        cout<<endl;

    }

    return 0;
}
