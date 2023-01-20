#include<iostream>
using namespace std;
int range;
void amplify();
main()
{
    cout<<"Enter range: ";
    cin>>range;
    amplify();

}
void amplify()
{
    
    for(int i=1; i <= range; i++)
    {
        cout<<i<<endl;
        
        if(i % 4 == 0)
        {
           int a = i * 10;
           cout<<a<<endl;
            continue;
        
        }
    }
    
}//completed