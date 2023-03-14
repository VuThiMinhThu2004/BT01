#include "bits/stdc++.h"
using namespace std;
int a[105][105];
int n,m;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void print() {
    for (int i=1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
           cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void Try(int i, int j, int **visited) {
    // Dieu kien de ket thuc tim kiem duong di trong me cung
    if (i == n && j == m) {
        a[i][j] = 2;
        print();
    }
    
    a[i][j] = 2;
    visited[i][j] = 1;

    for (int k = 0; k < 4; k++) {
        int i1 = dx[k] + i;
        int j1 = dy[k] + j;
        
        if(a[i1][j1] == 0 && i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && visited[i1][j1] == 0) {
            Try(i1,j1,visited);
            visited[i][j] = 0;
        }
    }
    a[i][j] = 0;   
}

int main() {
    cin >> n >> m;
    for (int i=1; i <= n; i++) for (int j = 1; j <= m; j++) cin >> a[i][j];

    int** visited = new int *[n+5];
    for(int i=1; i <= n; i++) {
        visited[i] = new int[m];
        for(int j=1; j <= m; j++) {
            visited[i][j] = 0;
        }
    }

    Try(1,1,visited);
    return 0;
}



/*

5 5
0 1 0 0 0
0 1 0 1 0
0 0 0 1 0
0 1 0 1 0
0 1 0 0 0


4 5
0 0 1 0 0 
1 0 1 0 0
0 0 0 1 0
0 1 0 0 0 
#include <iostream>
#include <vector>

using namespace std;

// Hàm dfs để tìm đường đi trong mê cung
bool dfs(vector<vector<int>> &maze, int i, int j, vector<vector<bool>> &visited) {
    // Kiểm tra điều kiện kết thúc đường đi
    if (i == maze.size() - 1 && j == maze[0].size() - 1) {
        maze[i][j] = 2;
        return true;
    }

    // Kiểm tra ô hiện tại có thể đi được không
    if (i < 0 || i >= maze.size() || j < 0 || j >= maze[0].size() || maze[i][j] == 1 || visited[i][j]) {
        return false;
    }

    // Đánh dấu ô hiện tại là đã đi qua
    visited[i][j] = true;

    // Đi sang các ô kề cạnh
    if (dfs(maze, i + 1, j, visited) || dfs(maze, i, j + 1, visited) || dfs(maze, i - 1, j, visited) || dfs(maze, i, j - 1, visited)) {
        maze[i][j] = 2;
        return true;
    }

    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Đọc vào mê cung
    vector<vector<int>> maze(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> maze[i][j];
        }
    }

    // Tạo ma trận visited để lưu các ô đã đi qua
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    // Gọi hàm dfs để tìm đường đi
    dfs(maze, 0, 0, visited);

    // In ra mê cung với các ô trong đường đi được đánh số 2
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (maze[i][j] == 2) {
                cout << "2 ";
            } else {
                cout << maze[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
*/