#include <iostream>
#include <algorithm>
using namespace std;

int arr[] = {11, 22, 33, 44, 55, 66, 77, 88};

int main()
{
    int *ptr;
    ptr = find(arr, arr + 8, 33);
    cout << "find: " << ptr - arr << endl;

    return 0;
}