//Tanmai Gambhir
//2010991744
//Set 04
//Q1

#include <iostream>
#include <unordered_set>
using namespace std;

// Function to find the minimum index of the repeating element
int lowIndex(int array[], int n)
{
    int minIndex = n;

    // creating an empty set to store array elements
    unordered_set<int> set;

    // traversing the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // updating the minimum index if value found before
        if (set.find(array[i]) != set.end())
        {
            minIndex = i;
        }
        //inserting into the set if first time value is found
        else
        {
            set.insert(array[i]);
        }
    }


    // returning minimum index
    return minIndex;
}

int main()
{
    int arr[] = {5, 6, 3, 4, 3, 6, 4};
    //int arr[] = { 1, 2, 3, 4, 5, 6 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int minIndex;

    try
    {
        minIndex = lowIndex(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (minIndex != n)
    {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;
}