//  N Queen Problem :- https://leetcode.com/problems/n-queens/description/

#include<iostream>
using namespace std;

bool isSafe(int row,int col,int n, int board[][20]){
    int dupRow= row;
    int dupCol= col;
    while(row>=0 && col>=0){
        if(board[row][col]==1)
        return false;
        col--;
        row--;
       
    }
    row= dupRow;
    col= dupCol;
    while(col>=0){
        if(board[row][col]==1)
        return false;
        col--;
    }

    row= dupRow;
    col= dupCol;
    while(row<n && col>=0){
        if(board[row][col]==1)
        return false;
        row++;
        col--;
        
    }
    return true;
}

void solve(int col,int n,int board[][20]){
    
    if(col==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout << endl; 
        return;
    }

    for (int row = 0; row < n; row++) {
        if (isSafe(row, col, n, board)) {
            board[row][col] = 1;
            solve(col + 1, n, board);
            board[row][col] = 0;  // Backtrack

        }
    }

}
int main(){
    int board[20][20]={0};
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    solve(0,n,board);
    return 0;

}