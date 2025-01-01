#include <iostream>
using namespace std;

int intersection1(int A[], int B[], int C[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i] == B[j])
            {
                C[j] = A[i];
                cout << C[j] << " ";
                k++;
            }
        }
    }
    return k;
}
int main()
{
    int size;

    do
    {
        cout << "Size of Array:";
        cin >> size;
        if (size <= 0)
        {
            cout << "Error! Input Again" << endl;
        }
    } while (size <= 0);

    int *arrA = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Value of " << i + 1 << " Element of Array A:";
        cin >> arrA[i];
    }

    int *arrB = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Value of " << i + 1 << " Element of Array B:";
        cin >> arrB[i];
    }

    int *arrC = new int[size];

    if (intersection1(arrA, arrB, arrC, size) > 0)
    {
        cout << "\nReturn Value = " << intersection1(arrA, arrB, arrC, size);
    }
    else
    {
        cout << "\nReturn Value = 0";
    }

    delete[] arrA;
    delete[] arrB;
    delete[] arrC;

    return 0;
}
