#include <iostream>
using namespace std;

int main()
{
    int A[2][2] = {{2, 0}, {1, -3}};
    int B[2][2] = {{-2, 4}, {3, -1}};
    int C[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Hasil A - B adalah:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
