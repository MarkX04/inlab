int ascendingRows(int arr[][1000], int row, int col) {
int cnt = 0;
    for (int i = 0; i < row; ++i)
    {
        bool flag = true;
        for (int j = 1; j < col; ++j) 
        {
            if (arr[i][j] < arr[i][j - 1]) flag = false;
        }
        if (flag) cnt++;
    }

    return cnt;
} n;
}