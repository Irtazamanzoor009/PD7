#include <iostream>
using namespace std;
void cargo(int num);
main()
{
    int num;
    cout << "Enter the count of cargo: ";
    cin >> num;
    cargo(num);
}
void cargo(int num)
{
    int weight;
    float sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
    float percentage_1 = 0, percentage_2, percentage_3;
    for (int i = 1; i <= num; i++)
    {
        cout << "Enter weight: ";
        cin >> weight;
        sum = sum + weight;
        if (weight >= 1 && weight <= 3)
        {
            sum1 = sum1 + weight;
        }
        if (weight > 3 && weight <= 11)
        {
            sum2 = sum2 + weight;
        }
        if (weight > 11)
        {
            sum3 = sum3 + weight;
        }
    }
    percentage_1 = (sum1 / sum) * 100;
    percentage_2 = (sum2 / sum) * 100;
    percentage_3 = (sum3 / sum) * 100;
    float avg_price = ((sum1 * 200) + (sum2 * 175) + (sum3 * 120)) / sum;

    cout << "The average price per ton of the cargo: " << avg_price << endl;
    cout << "Percentage of the cargo by minibus: " << percentage_1 << endl;
    cout << "Percentage of the cargo by truck: " << percentage_2 << endl;
    cout << "Percentage of the cargo by train: " << percentage_3 << endl;
}