#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]{1, 34, 65, 12, 32, 43, 98};
    sort(begin(arr), end(arr));

    for (int i = 0; i < static_cast<int>(size(arr)); ++i) // usamos satatic cast para converitr el tamano del array a int 
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
    return 0;
}



