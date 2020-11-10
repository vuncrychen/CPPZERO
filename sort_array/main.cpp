#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int number[] = {12, 23, 42, 56, 27, 92, 35};

    for (int i = 0; i < 7; i ++)
    {
        cout << number[i] << endl;
    }

    cout << endl;

    sort(begin(number), end(number));

    for (int i = 0; i < 7; i ++)
    {
        cout << number[i] << endl;
    }

    return 0;
}
