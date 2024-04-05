#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std; 

// Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
int equilibriumPoint(long long a[], int n) {

    int sum = 0;
    int leftsum = 0;
    
    for (int i = 0; i < n; i++)
        sum += a[i];
    
    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        
        if (leftsum == sum)
            return i+1;
        
        leftsum += a[i];
    }
    return -1;
}

int main()
{
    long long a[] = {1, 3, 5, 2, 2};
    int n = sizeof(a) / sizeof(a[0]);

    int equilibriumIndex = equilibriumPoint(a, n);

    if (equilibriumIndex == -1)
        cout << "No equilibrium point found in the array." << endl;
    
    else
        cout << "Equilibrium point is at position: " << equilibriumIndex << endl;
}
