Adjacency Matrix er Code
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec[5];
    int edge, node;
    cin >> node >> edge;

    int n1, n2;
    for (int i = 0; i < edge; i++)
    {
        cin >> n1 >> n2;
        vec[n1].push_back(n2);
        vec[n2].push_back(n1);
    }

    for (int i = 0; i < vec[3].size(); i++)
    {
        cout << vec[3][i] << endl;
    }

    return 0;
}
