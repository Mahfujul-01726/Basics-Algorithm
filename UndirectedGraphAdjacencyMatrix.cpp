#include <iostream>
using namespace std;

int adjmat[100][100];
int main()
{

    int node, edge;
    cin >> node >> edge;

    int r, c;
    for (int i = 0; i <= edge; i++)
    {
        cin >> r >> c;
        adjmat[r][c] = 1;
        adjmat[c][r] = 1;
    }
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j <= node; j++)
        {
            cout << adjmat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}