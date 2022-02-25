#include<vector>
#include<iostream>
using namespace std;


class Solution {
    
    void mark(vector<vector<char>>& m,int i,int j,int r,int c){
        
        if(i<0 || i>=r || j<0 || j>=c || m[i][j]!='1')
            return;
       
        
    
            m[i][j]='2';
        
        
        mark(m,i+1,j,r,c);
        mark(m,i-1,j,r,c);
        mark(m,i,j+1,r,c);
        mark(m,i,j-1,r,c);
        
        
    }
    
    
public:
    int numIslands(vector<vector<char>>& grid) {
        
        // ios_base::sync_with_stdio(false);
        // cin.tie(NULL);
        int r = grid.size();
        int n=0;
        int c = grid[0].size();
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                
                if(grid[i][j]=='1'){
                    mark(grid,i,j,r,c);
                    n+=1;
                    
                }
                
            }
        }
        
        return n;
        
        
        
    }
};