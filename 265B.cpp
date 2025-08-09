#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int timeToEat = 1;
    const int timeToJump = 1;

    long numTrees;
    cin >> numTrees;
    int *heights = new int[numTrees];
    for (long k = 0; k < numTrees; k++)
        scanf("%d", heights + k);

    int currentHeight = 0;
    long totalTime = -1;

    for (int t = 0; t < numTrees; t++)
    {
        if (currentHeight > heights[t])
            totalTime += currentHeight - heights[t] + timeToJump;
        else
            totalTime += timeToJump + heights[t] - currentHeight;
        currentHeight = heights[t];
        totalTime += timeToEat;
    }

    cout << totalTime << endl;
    return 0;
}