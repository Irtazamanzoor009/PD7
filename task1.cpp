#include<iostream>
using namespace std;

void design();
int rows;
main()
{
    
    cout<<"Enter number of rows: ";
    cin>>rows;
    design();

}
void design()
{
    char op = '*';
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<op;
        }
        cout<<endl;
    }
    

}//completed