/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

//С break

int main()
{
    int x;
    cin >> x;
    switch (x)
    {
        case 1: case 2: case 3: case 4:
        case 5: cout << "pабочий день"; break;
        case 6:  case 7: cout << "выходной"; break;
        default: cout << "вы ошиблись";
    }
    return 0;
}