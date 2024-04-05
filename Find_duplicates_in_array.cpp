vector<int> duplicates(long long arr[], int n) {
        // code here
        unordered_map<long long, int> freq; 
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        
        for (auto it = freq.begin(); it !=freq.end(); it++)
        {
            if (it->second > 1)
            {
                temp.push_back(it->first);
            }
        }
    
        
        if (temp.empty())
        {
            temp.push_back(-1);
        }
        sort(temp.begin(), temp.end());
        return temp;
    }

int main()
{
    long long arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 11, 12, 13, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> result = duplicates(arr, n);

    if (result.empty())
    {
        cout << "No duplicates found" << endl;
    }
    else
    {
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}
