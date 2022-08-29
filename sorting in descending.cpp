#include<iostream>
using namespace std;
int main ()
{   int x;
    int num[x];
    int i, j, desc;
    cout<<"enter the no of elements:";
    cin>>x;
    cout<<"\n Enter"<<x<<" Numbers : \n";
    cout<<" ";
    for (i = 0; i < x; ++i)
    cin>>num[i];
   
    for (i = 0; i < x; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < x; ++j)
        {
            if (num[i] < num[j])
            {
                desc = num[i];
                num[i] = num[j];
                num[j] = desc;
            }
        }
    }
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i < x; ++i)
    {
        cout<<" ";
        cout<<num[i];
        cout<<"\n";
    }
}
