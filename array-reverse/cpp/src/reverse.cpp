#include "reverse.h"
#include <iostream>

using namespace std;

int *reverse(int *arr, int N)
{
    if(N == 0)
    {
        return {};
    }

    int *reversed = new int[N];
    int n = 0;

    for(int i = N; i >= 0; i--)
    {
        reversed[n++] = arr[i-1];
    }

    return reversed;
}
