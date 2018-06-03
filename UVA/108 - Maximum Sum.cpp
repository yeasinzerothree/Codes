#include <bits/stdc++.h>

using namespace std;

int ROW, COL;

int kadane(int *arr, int *start, int *finish, int n) {
    int sum = 0, max_sum = INT_MIN;     //initializing sum and max_sum

    *finish = -1;

    int local_start = 1;

    for (int i = 0; i < n; ++i) {
        sum += arr[i];

        if (sum < 0) {
            sum = 0;
            local_start = i + 1;
        } else if (max_sum < sum) {
            max_sum = sum;
            *start = local_start;
            *finish = i;
        }
    }

    if (*finish != -1)
        return max_sum;

    max_sum = arr[0];

    for (int j = 1; j < n; ++j) {
        if (arr[j] > max_sum) {
            max_sum = arr[j];
            *start = *finish = j;
        }
    }

    return max_sum;
}

void findMax(int arr[][100]) {
    int max_sum = INT_MIN, finalLeft = 0, finalRight = 0, finalTop = 0, finalBottom = 0;

    int left, right;
    int temp[ROW], sum, start, finish;

    for (left = 0; left < COL; left++) {
        memset(temp, 0, sizeof(temp));

        for (right = left; right < COL; right++) {
            for (int j = 0; j < ROW; ++j) {
                temp[j] += arr[j][right];
            }


            sum = kadane(temp, &start, &finish, ROW);

            if (sum > max_sum) {
                max_sum = sum;
                finalLeft = left;
                finalRight = right;
                finalTop = start;
                finalBottom = finish;
            }
        }
    }

    cout << max_sum << endl;
}

int main() {
    int size;

    while (cin >> size) {

        ROW = COL = size;
        int arr[size][100];

        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                cin >> arr[i][j];
            }
        }

        findMax(arr);
    }
}
