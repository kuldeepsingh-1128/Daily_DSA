#include <iostream>
using namespace std;

int lastoccur(vector<int> vec1, int i, int target)
{

    if (i == vec1.size() - 1)
    {
        return -1;
    }

    int idx_found = lastoccur(vec1, i + 1, target);

    if (idx_found == -1)
    {
        if (vec1[i] == target)
        {
            return i;
        }
    }
    return idx_found;
}

int main()
{
    vector<int> vec1 = {1, 2, 3, 3, 3, 4, 5, 6, 7, 8};
    cout << lastoccur(vec1, 0, 3);
}