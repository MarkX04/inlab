int primeColumns(int arr[][1000], int row, int col) {
int cnt = 0;
    for (int i = 0; i < col; ++i)
    {
        int sum = 0;
        for (int j = 0; j < row; ++j) sum += arr[j][i];
        
        if (sum <= 0) continue;

        bool flag = true;
        for (int k = 2; k <= sum / 2 + 1 && sum > 0; ++k)
            if (sum % k == 0) flag = false;

        cnt += flag;
    }

    return cnt;
}