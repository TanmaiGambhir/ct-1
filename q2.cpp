//Tanmai Gambhir
//2010991744
//Set 04
//Q2

#include <bits/stdc++.h>
using namespace std;

// function to check if array elements are consecutive or not
bool ifConsecutive(int arr[], int n)
{
    // Sorting the array
    sort(arr, arr + n);
    // checking the adjacent elements
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1] + 1)
        {
            return false;
        }
    }
    return true;
}

// main program to test above functions
int main()
{
    int array[]= {4, 2, 4, 3, 1};
    int n = sizeof(array) / sizeof(array[0]);

    bool result;
    //used exception handling
    try
    {
        result = ifConsecutive(array, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (result == true)
        cout << " The array contains consecutive integers ";
    else
        cout << " The array does not contain consecutive integers ";
    return 0;
}
