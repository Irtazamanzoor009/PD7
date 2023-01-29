#include <iostream>
using namespace std;
void design(int rows);
main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    design(rows);
}
void design(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        int a, b;
        int j, x;
        for (a = 1; a <= i; a++)
        {
            cout << "*";
        }
        for (b = rows; b >= i; b--)
        {
            cout << " ";
        }
        for (j = rows; j >= i; j--)
        {
            cout << " ";
        }
        for (x = 1; x <= i; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
}