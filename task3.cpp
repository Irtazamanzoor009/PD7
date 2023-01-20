#include<iostream>
using namespace std;
void design();
void design2();
int rows;
main()
{
    cout<<"Enter number of rows: ";
    cin>>rows;
    design();
    design2();
}
void design()
{
    for(int i = 1; i <= rows; i++)
    {
        int space = rows - i;

        for(int j = space; j>0; j--)
        {
            cout<<" ";
        }
        int star = i;
        for(int x = 1; x <= star; x++)
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
        //int star = rows ;
        for(int j = rows; j >= i; j++ )
        {
            
            cout<<"*";
            
        }
        // int space = i;
        // for(int x = i; x >= 1 ; x--)
        // {
        //     cout<<" ";
        // }
        cout<<endl;
    }
}//incomplete