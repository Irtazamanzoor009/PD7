#include<iostream>
using namespace std;
int number;
int sequence();
main()
{
    cout<<"Enter number of rows: ";
    cin>>number;
    int result = sequence();
    cout<<result<<endl;
    
}
int sequence()
{
    int i=1, x=0;
    while(i <= number)
    {
        x = x + i;
        i++;
    
    }
    return x;
}//completed