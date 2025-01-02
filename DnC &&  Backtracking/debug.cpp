#include <iostream>
using namespace std;

// 1
void merge(int arr[], int start, int mid, int end)
{
    int left[mid - start + 1];
    int right[end - mid];
    for (int i = 0; i <= mid - start; i++)
    {
        left[i] = arr[start + i];
    }
    for (int j = 0; j < end - mid; j++)
    {
        right[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = start;
    while (i <= mid - start && j < end - mid)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i <= mid - start)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < end - mid)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// 2
void merge_sort(int arr[], int start, int end)
{
    // base case
    if (start >= end)
        return;

    int mid = (start + end) / 2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

// 3
int ceilSearch(int arr[], int low, int high, int x)
{
    int mid;
    if (x <= arr[low])
        return low;
    if (x > arr[high])
        return -1;

    mid = (low + high) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] < x)
    {
        if (mid + 1 <= high && x <= arr[mid + 1])
            return mid + 1;
        else
            return ceilSearch(arr, mid + 1, high, x);
    }
    else
    {
        if (mid - 1 >= low && x > arr[mid - 1])
            return mid;
        else
            return ceilSearch(arr, low, mid - 1, x);
    }
}

// 4
void print(int** board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << " ";
        }
    }
    cout << endl;
}
// bool check_position(int** board, int col, int row){
//     for(int j=0; j<n; j++){
//         if(board[row][j]) return false;
//     }
//     for(int i=0; i<n; i++){
//         if(board[i][col]) return false;
//     }
//     for(int i=0; i<n; i++){
//         if((row+col-i)>=n || (row+col-i<0)) continue;
//         if(board[i][row+col-i]) return false;
//     }
//     for(int i=0; i<n; i++){
//         if((i-row+col)>=n || (i-row+col<0)) continue;
//         if(board[i][i-row+col]) return false;
//     }
//     return true;
// }
bool backtracing(int** board, int n, int row){
    if(row > n){
        print(board,n);
        return true;
    }
    for(int j=0; j<n; j++){
        if(check_position(board,j,row)){
            board[row][j] = 1;
            backtracing(board, n, row+1);
            board[row][j] = 0;
        }
    }
}
void placeNQueens(int n){
    int** board = new int*[n];
    for(int i=0; i<n; i++){
        board[i] = new int[n];
        for(int j=0; j<n; j++){
            board[i][j] = 0;
        }
    }
    backtracing(board, n, 0);
}

// 5

// 6
int power(int x, int n){
    if(n == 0) return 1;
    if(x == 0) return 0;
    int temp = power(x, n/2);
    if(n % 2){
        return temp*temp;
    } else{
        return temp*temp*x;
    }
}

int main()
{
    // 6
    cout << power(2, 4) << endl;

    // placeNQueens(4);

    // int arr[4] = {1, 3, 5, 7};
    // int n = 4;
    // int start = 0;
    // int end = 3;
    
    // int ans = ceilSearch(arr, 0, 3, 4);
    // cout << ans << endl;

    // merge(arr, start, mid, end);
    // cout << "Before : " << " ";
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }cout << endl;
    // merge_sort(arr, start, end);
    // cout << "After  : " << " ";
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    return 0;
}