#include<bits/stdc++.h>

using namespace std;

int grid[3][3];
int dx[] = {0,0,0,1,1,1,2,2,2};
int dy[] = {0,1,2,0,1,2,0,1,2};

void printGrid()
{
    for(int i=0; i<3; i++)
    {
        cout<<"|";
        for(int j=0; j<3; j++)
            cout<<grid[i][j]<<"|";
        cout<<endl;
    }
    cout<<endl;
}

bool fillGrid(int pos)
{
    if(grid[dx[pos-1]][dy[pos-1]]==0)
    {
        grid[dx[pos-1]][dy[pos-1]] = 1;
        return true;
    }
    return false;
}

bool rowMove(int x)
{
    for(int i=0; i<3; i++)
    {
        if(grid[i][0]==0&&grid[i][1]==x&&grid[i][2]==x)
        {
            grid[i][0] = 2;
            return true;
        }
        if(grid[i][0]==x&&grid[i][1]==0&&grid[i][2]==x)
        {
            grid[i][1] = 2;
            return true;
        }
        if(grid[i][0]==x&&grid[i][1]==x&&grid[i][2]==0)
        {
            grid[i][2] = 2;
            return true;
        }
    }
    return false;
}

bool columnMove(int x)
{
    for(int i=0; i<3; i++)
    {
        if(grid[0][i]==0&&grid[1][i]==x&&grid[2][i]==x)
        {
            grid[0][i] = 2;
            return true;
        }
        if(grid[0][i]==x&&grid[1][i]==0&&grid[2][i]==x)
        {
            grid[1][i] = 2;
            return true;
        }
        if(grid[0][i]==x&&grid[1][i]==x&&grid[2][i]==0)
        {
            grid[2][i] = 2;
            return true;
        }
    }
    return false;
}

bool diagonalMove(int x)
{
    if(grid[0][0]==0&&grid[1][1]==x&&grid[2][2]==x)
    {
        grid[0][0] = 2;
        return true;
    }
    if(grid[0][0]==x&&grid[1][1]==0&&grid[2][2]==x)
    {
        grid[1][1] = 2;
        return true;
    }
    if(grid[0][0]==x&&grid[1][1]==x&&grid[2][2]==0)
    {
        grid[2][2] = 2;
        return true;
    }

    if(grid[0][2]==0&&grid[1][1]==x&&grid[2][0]==x)
    {
        grid[0][2] = 2;
        return true;
    }
    if(grid[0][2]==x&&grid[1][1]==0&&grid[2][0]==x)
    {
        grid[1][1] = 2;
        return true;
    }
    if(grid[0][2]==x&&grid[1][1]==x&&grid[2][0]==0)
    {
        grid[2][0] = 2;
        return true;
    }
    return false;
}

void oponentMove()
{
    /// Offensive Move
    if(rowMove(2))       return;
    if(columnMove(2))    return;
    if(diagonalMove(2))  return;

    /// Defensive Move
    if(rowMove(1))       return;
    if(columnMove(1))    return;
    if(diagonalMove(1))  return;

    /// Random Pick
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(grid[i][j]==0)
            {
                grid[i][j] = 2;
                return;
            }
}

bool checkDraw()
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(!grid[i][j])
                return false;
    return true;
}

int checkWinner()
{
    /// Row Cross
    for(int i=0; i<3; i++)
        if(grid[i][0]>0&&grid[i][0]==grid[i][1]&&grid[i][1]==grid[i][2])
            return grid[i][0];
    /// Column Cross
    for(int i=0; i<3; i++)
        if(grid[0][i]>0&&grid[0][i]==grid[1][i]&&grid[1][i]==grid[2][i])
            return grid[0][i];

    /// Diagonal Cross 1
    if(grid[0][0]>0&&grid[0][0]==grid[1][1]&&grid[1][1]==grid[2][2])
        return grid[0][0];

    /// Diagonal Cross 2
    if(grid[0][2]>0&&grid[0][2]==grid[1][1]&&grid[1][1]==grid[2][0])
        return grid[0][0];

    if(checkDraw()) return 3;
    return -1;
}

int main()
{
    cout<<"Welcome to Tic-Tac-Toe"<<endl<<endl;

    int pos,win = -1;

    while(win<0)
    {
        printGrid();
        cout<<"Pick a spot"<<endl;
        cin>>pos;
        if(fillGrid(pos))   oponentMove();
        else
            cout<<"Invalid Move TRY Again!!!"<<endl;
        win = checkWinner();
    }

    printGrid();
    if(win==1)
        cout<<"Whoo!!! YOU Win"<<endl;
    else if(win==2)
        cout<<"Sorry YOU Loose!!! :("<<endl;
    else
        cout<<"It's a Draw"<<endl;

    return 0;
}
