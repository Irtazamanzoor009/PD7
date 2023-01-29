#include<iostream>
using namespace std;
void percentages(int num);
main()
{
    int num;
    cout<<"Enter the count of numbers: ";
    cin>>num;
    percentages(num);
}
void percentages(int num)
{
    float count1=0, count2=0, count3=0;
    float percentage_1, percentage_2, percentage_3;
    int num_1;
    for(int i=1; i<=num; i++)
    {
        cout<<"Enter a number: ";
        cin>>num_1;

        if(num_1 % 2 == 0)
        {
            count1 = count1 + 1;
        }

        if(num_1 % 3 == 0)
        {
            count2 = count2 + 1;
        }

        if(num_1 % 4 == 0)
        {
            count3 = count3 + 1;
        }

    percentage_1 = (count1 / num) * 100;
    percentage_2 = (count2 / num) * 100;
    percentage_3 = (count3 / num) * 100;

    }

    cout<<"Percentage of numbers that are divisible by 2: "<<percentage_1<<"%"<<endl;
    cout<<"Percentage of numbers that are divisible by 3: "<<percentage_2<<"%"<<endl;
    cout<<"Percentage of numbers that are divisible by 4: "<<percentage_3<<"%"<<endl;


}
    