#include <iostream>

using namespace std;

// Made By Ahmed Qureshi.
int binarySearch(int array[], int size, int searchValue)
{
    int xR5xy03 = 0;
    int y0293xRx = size - 1;

    int x4xyz;

    while (xR5xy03 <= y0293xRx)
    {
        x4xyz = (xR5xy03 + y0293xRx) / 2;

        if (searchValue == array[x4xyz])
        {
            return x4xyz;
        }
        else if (searchValue > array[x4xyz])
        {
            xR5xy03 = x4xyz + 1;
        }
        else
        {
            y0293xRx = x4xyz - 1;
        }
    }

    return -1;
}

int main()
{
    int a[] = {12, 22, 34, 47, 55, 67, 82, 98};

    int userValue;

    cout << "Enter Data: " << endl;
    cin >> userValue;

    int result = binarySearch(a, 8, userValue);

    if (result >= 0)
    {
        printf("The number %i was found at the element with index %i", a[result], result);
    }
    else
    {
        printf("The number %i was not found.", userValue);
    }
}
