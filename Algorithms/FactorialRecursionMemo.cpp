// Recurrsive Factorial Function with Memoization
#include <iostream>

using namespace std;

int memoArr [1000];

// Recurrsive with Memoization
int factorial (int num)
{
    // First we check if we can save resources from existing values
    if (memoArr[num] != -1)
    {
        cout << "(Saved on resources) ";
        return memoArr[num];
    }

    // If not, we proceed to the calculation and storage of the value
    if (num == 0)
        memoArr[num] = 1;
    else
        memoArr[num] = factorial(num - 1)*num;
    return memoArr[num];
}



int main()
{

    int number = 0, reps = 0;
    const int memoArrSize = sizeof(memoArr)/sizeof(int);
    for (int i = 0; i < memoArrSize; i++)
        memoArr[i] = -1;
        
    cout << "Welcome to the Recurrsive Factorial Function! Max Entries: " << memoArrSize << "! \n";

    while(true)
    {
        cout << "Number: ";
        cin >> number;
        if (number >= 0 && reps < memoArrSize)
            cout << number << "! = " << factorial(number) << endl;
        else
            break;
    }
    return 0;
}

