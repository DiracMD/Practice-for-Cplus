#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    int A[3][3]={{11,12,13},{21,22,23},{31,32,33}};
    cout << "use setw \n";
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
            cout <<setw(4)<< A[i][j]; // set the width
        cout << "\n";
    }
    cout << endl;

    cout <<"use cout.width \n";
    cout << setfill('*');
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout.width(4);
            cout<< A[i][j]; // set the width
        }
        cout << "\n";
    }
    cout << endl;
    return 0;
}