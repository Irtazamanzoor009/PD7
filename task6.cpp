#include<iostream>
using namespace std;

int period;
int patientarrive;
void treated();
main()
{
    cout<<"Enter the period you want to make calculations: ";
    cin>> period;   
    treated();
}
void treated()
{
    for(int i=1; i<=period; i++)
    {
        cout<<"Patient arrive on that day: ";
        cin>> patientarrive;

        int checked = 7 - patientarrive;
        if(checked >= 0)
        {
            
        }
   
        
    }

}//incomplete
