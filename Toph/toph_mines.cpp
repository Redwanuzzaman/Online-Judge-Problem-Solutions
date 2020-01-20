#include <bits/stdc++.h>
using namespace std;
#define sfnm scanf("%d%d",&row,&clm)
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};

int main()
{
    int row, clm;
    sfnm;
    char s[row][clm];
    getchar();
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < clm; j++)
        {
            scanf("%c", &s[i][j]);
        }
        getchar();
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < clm; j++)
        {
            if(s[i][j] == '*')
            {
                cout << "*";
                continue;
            }
            else
            {
                int cnt = 0;
                for(int k = 0; k < 8; k++)
                {
                    int x = i + fx[k];
                    int y = j + fx[y];
                    if(x >= 0 && x < row && y >= 0 && y < clm)
                    {
                        if(s[x][y] == '*')
                        {
                            cnt++;
                        }
                    }
                }
                if(cnt > 0) cout << cnt << endl;
            }
            cout << endl;
        }
    }
}
