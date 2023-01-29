#include<iostream>
#include<windows.h>
using namespace std;
void design1();
void design2();
int rows;
main()
{
   cout<<"Enter number of rows: ";
   cin>>rows;
   design1();
   design2();
   
}

void design1()
{
    for(int i=1; i<=rows; i++)
    {
        int j,x;
        for(j=rows; j>=i; j--)
        {
            cout<<" ";
        }
        for(x=1; x<=j; x++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void design2()
{
    
    for(int i = 1; i <= rows; i++)
    {
        int j,x;
        for(j=1; j<=i; j++)
        {
            cout<<" ";
        }
        for(x=rows; x>=j; x--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}








