#include<iostream>
using namespace std;

int main()
{
    char board[3][3] = {'  '};
    int x, y, k, i;

    // **** ���带 NULL �� �ʱ�ȭ�Ѵ�.
    fill(&board[0][0], &board[3][3], ' ');
    // ����ڷκ��� ��ġ�� �޾Ƽ� ���忡 ǥ���Ѵ�.
    for (k = 0; k < 9; k++) {
        cout << "(x, y) ��ǥ: ";
        cin >> x >> y;
        // **** ���� ä��ÿ�!!
        if (k % 2 == 0) {
            board[x][y] = 'o';
        }
        else if (k % 2 == 1) {
            board[x][y] = 'x';
        }
           // ���带 ȭ�鿡 �׸���.
        for (i = 0; i < 3; i++) {
            cout << "---|---|---" << endl;
            cout << board[i][0] << "  | " << board[i][1] << " |  " << board[i][2] << endl;
        }
        cout << "---|---|---" << endl;
    }
}