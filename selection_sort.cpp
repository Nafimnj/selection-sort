#include <iostream>
using namespace std;
int arr[] = {1, 6, 0, 3, 8, 5};
int i, j, k, t, n = 6;
int mini;
void selection_sort()
{

    for (i = 0; i < n; i++)
    {
        mini = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }

        t = arr[i];
        arr[i] = arr[mini];
        arr[mini] = t;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    selection_sort();

    return 0;
}