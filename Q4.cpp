#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int arr[], int n) {

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {

        currentSum = currentSum + arr[i];

        if (currentSum > maxSum)
            maxSum = currentSum;

        if (currentSum < 0)
            currentSum = 0;
    }

    return maxSum;
}

int main() {

    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubArraySum(arr, n);

    cout << result << endl;

    return 0;
}
