#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    bool serve_left = true, serve_right = false;
    int point_left = 0, point_right = 0, won_left = 0, won_right = 0;
    cin >> input;

    for(int i = 0; i < input.size(); i++)
    {
        if(input[i] == 'S')
        {
            if(serve_left)
            {
                point_left += 1;

                if((point_left >= 10) or (point_left >= 5 and (point_left - point_right) >= 2))
                {
                    won_left += 1;
                    point_left = 0;
                    point_right = 0;
                    continue;
                }
            }
            else
            {
                point_right += 1;

                if((point_right >= 10) or (point_right >= 5 and (point_right - point_left) >= 2))
                {
                    won_right += 1;
                    point_left = 0;
                    point_right = 0;
                    continue;
                }
            }
        }
        else if(input[i] == 'R')
        {
            if(serve_left)
            {
                serve_left = false;
                serve_right = true;
                point_right += 1;

                if((point_right >= 10) or (point_right >= 5 and (point_right - point_left) >= 2))
                {
                    won_right += 1;
                    point_left = 0;
                    point_right = 0;
                    continue;
                }
            }
            else
            {
                serve_right = false;
                serve_left = true;
                point_left += 1;

                if((point_left >= 10) or (point_left >= 5 and (point_left - point_right) >= 2))
                {
                    won_left += 1;
                    point_left = 0;
                    point_right = 0;
                    continue;
                }
            }
        }
        else if(input[i] == 'Q')
        {
            if(won_left >= 2)
            {
                printf("%d (winner) - %d\n", won_left, won_right);
            }
            else if(won_right >= 2)
            {
                printf("%d - %d (winner)\n", won_left, won_right);
            }
            else if(serve_left)
            {
                printf("%d (%d*) - %d (%d)\n", won_left, point_left, won_right, point_right);
            }
            else if(serve_right)
            {
                printf("%d (%d) - %d (%d*)\n", won_left, point_left, won_right, point_right);
            }
        }
    }
}
