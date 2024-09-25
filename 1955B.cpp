#include <bits/stdc++.h>
using namespace std;

bool isProgressiveSquare(int n, int c, int d, const std::vector<int> &elements)
{
    if (elements.size() != n * n)
    {
        return false;
    }

    // Initialize top-left corner element (a1,1)
    int a11 = elements[0];
    int i, j;
    // Iterate through each element in the matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            int expectedValue = 0;

            // Top row (special case, no element above)
            if (i == 0)
            {
                expectedValue = a11; // Start with top-left corner
            }
            else
            {
                expectedValue = elements[(i - 1) * n + j] + c; // Add from above
            }

            // Check if the current element matches the expectation
            if (elements[i * n + j] != expectedValue)
            {
                return false;
            }
        }

        // Update a1,1 for the next row (only needed for the first element in each row)
        if (j == 0)
        {
            a11 = elements[i * n + j];
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> a(n * n);
        for (int i = 0; i < n * n; i++)
            cin >> a[i];

        if (isProgressiveSquare(n, c, d, a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
