// Time complexity: O(N)

#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& array, int n) {
    int total = 1;

    for(int i = 2; i <= n; i++)
    {
        total += i;

        total -= array[i-2];
    }

    return total; 

}


int main()
{
    vector<int> array = {1, 2, 4, 5, 6};
    int n = array.size();

    int missingnumber = missingNumber(array, n);

    cout << "Missing number is: " << missingnumber << endl;
}
