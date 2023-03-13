#include<iostream>
using namespace std;

int main()
{
    char board[3][3] = {'  '};
    int x, y, k, i;

    // **** 보드를 NULL 로 초기화한다.
    fill(&board[0][0], &board[3][3], ' ');
    // 사용자로부터 위치를 받아서 보드에 표시한다.
    for (k = 0; k < 9; k++) {
        cout << "(x, y) 좌표: ";
        cin >> x >> y;
        // **** 한줄 채우시오!!
        if (k % 2 == 0) {
            board[x][y] = 'o';
        }
        else if (k % 2 == 1) {
            board[x][y] = 'x';
        }
           // 보드를 화면에 그린다.
        for (i = 0; i < 3; i++) {
            cout << "---|---|---" << endl;
            cout << board[i][0] << "  | " << board[i][1] << " |  " << board[i][2] << endl;
        }
        cout << "---|---|---" << endl;
    }
}