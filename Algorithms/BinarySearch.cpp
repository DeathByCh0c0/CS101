// Basic Binary Search Algorithm
// [1.....N] -> if (>): [N/2+1,N], if (<): [1,N/2-1]

#include <iostream>
using namespace std;

int arr [] = {1,3,7,9,15,23,29,37,64,101};

int binarySearch (int firstElement, int lastElement, int target)
{
    cout << "Searching between: " << firstElement << " and: " << lastElement << endl;
    int middleElement = firstElement + (lastElement - firstElement) / 2;
   
    // Target is in the middle
    if (target == arr[middleElement])
        return middleElement;
       
    // Target is in the left half
    if (target < arr[middleElement])
        return binarySearch(firstElement, middleElement - 1, target);
   
    // Target is in the right half
    if (target > arr[middleElement])
        return binarySearch(middleElement + 1, lastElement, target);
}

int main()
{
    int arrSize = sizeof(arr)/sizeof(int);
    int target = -1;
   
    cout << "Input target: ";
    cin >> target;
    cout << "Element found at: " << binarySearch(0, arrSize - 1, target);

    return 0;
}