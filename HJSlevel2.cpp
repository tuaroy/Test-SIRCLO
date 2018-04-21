#include <bits/stdc++.h>
#define MAX 200
using namespace std;
char grid[MAX][MAX];
int cek[MAX][MAX];
int n,m;

bool isInsideGrid(int i, int j){
    if(cek[i][j])
        return false;
    return (i >= 0 && i < n && j >= 0 && j < m );
}
void move_(int x, int y,int xp,int yp){
   // cout << x << " " << y << " " << xp << " " << yp << " " << cek[x][y] << endl;
    cek[x][y]=1;
    if(grid[x][y]=='E'){
       //     cout << "found E" << endl;
        return;
    }
    if(isInsideGrid(x+1,y)){
        if(grid[x+1][y]=='.' ||   grid[x+1][y]=='E' ){
            cout << "D";
            move_(x+1,y,x,y);
        }
    }
    if(isInsideGrid(x,y+1)){
        if(grid[x][y+1]=='.'||grid[x][y+1]=='E'){
            cout << "R";
            move_(x,y+1,x,y);
        }
    }
    if(isInsideGrid(x-1,y)){
        if(grid[x-1][y]=='.' || grid[x-1][y]=='E'){
            cout << "U";
            move_(x-1,y,x,y);
        }
    }
    if(isInsideGrid(x,y-1)){
        if(grid[x][y-1]=='.' || grid[x][y-1]=='E'){
            cout << "L";
            move_(x,y-1,x,y);
        }
    }

}
int main(){
   // freopen("input.txt","r",stdin);
    //freopen("ouput.txt","w",stdout);
    pair<int,int> st,ed;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> grid[i][j];
            if(grid[i][j]=='S')
                st=make_pair(i,j);
            else if(grid[i][j]=='E')
                ed = make_pair(i,j);
        }
    }
    move_(st.first,st.second,-1,-1);
    cout << endl;

    return 0;
}
