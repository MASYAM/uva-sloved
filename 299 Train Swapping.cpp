#include<iostream>
using namespace std;

    int main()
    {
        int test_case = 0;
        int i,j,numberOfTestCase=0;
        int number[52];
        int temp,counter=0;

        cin>>test_case;

            while(test_case>0)
            {
                cin>>numberOfTestCase;

                    for(j=0;j < numberOfTestCase;j++)
                    {
                        cin>>number[j];
                    }

                    for(i=0;i<numberOfTestCase;i++)
                    {
                        for(j=i+1;j<numberOfTestCase;j++)
                        {
                            if(number[i] > number[j])
                            {
                                temp = number[i];
                                number[i] = number[j];
                                number[j] = temp;
                                counter++;
                            }
                        }
                    }


                    cout<<"Optimal train swapping takes "<<counter<<" swaps.";
                    counter = 0;
                    cout<<endl;

                test_case--;
            }


        return 0;

    }

