#include<iostream>
using namespace std;
void design();
int rows;
main()
{
    cout<<"Enter rows: ";
    cin>>rows;
    design();
}
void design()
{
    for(int i=1; i<=rows; i++)
    {
        for(int j=rows; j>=i; j--)
        {
            cout<<"*";
        }
        cout<<endl;

    }

}//completed