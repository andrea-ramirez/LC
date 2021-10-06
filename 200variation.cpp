#include <iostream>
using namespace std;
#include <vector>

    void dfs(vector<vector<int>>& grid, int x, int y, int &count){
        if(x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == 0 || grid[x][y] == 2){
            return;
        }
        
        grid[x][y] = 2;
        
        if(x == 0 || x == grid.size()-1 || y == 0 || y == grid[0].size()-1){
            count++;
        }else if(x + 1 <= grid.size()-1 && grid[x+1][y] == 0){
            count++;
        }else if(x-1 >= 0 && grid[x-1][y] == 0){
            count++;
        }else if(y + 1 <= grid[0].size()-1 && grid[x][y+1] == 0){
            count++;
        }else if(y - 1 >= 0 && grid[x][y-1] == 0){
            count++;
        }
        
        dfs(grid,x + 1, y, count);
        dfs(grid,x - 1, y, count);
        dfs(grid,x, y + 1, count);
        dfs(grid,x, y-1, count);

    }
  
    int numIslands(vector<vector<int>>& grid) {
        int largestPerimeter = 0;
        int counter = 0;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    dfs(grid,i,j,counter);
                    largestPerimeter = max(largestPerimeter,counter);
                    counter = 0;
                }
            }
        }
        
        return largestPerimeter;
        
    }

int main() {
	/*
	vector<vector<int>> grid = {{1, 0, 1, 1, 1},
 {1, 0, 1, 1, 1},
 {0, 1, 0, 1, 1}};
 */

 vector<vector<int>> grid = {{0, 0, 0, 0, 0, 0, 0},
 {0, 1, 0, 1, 1, 1, 0},
 {0, 1, 0, 1, 1, 1, 0},
 {0, 0, 1, 1, 1, 1, 0},
 {0, 0, 0, 0, 0, 0, 0}};

 cout << numIslands(grid) << endl;

  return 0;
}
