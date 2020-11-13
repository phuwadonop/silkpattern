#include<iostream>

using namespace std;

char pattern[50000][71];

void sol(int, int*);

int main() {

    int N;
    cin >> N;

    int rollOutput = 0;

    int* roll = &rollOutput;

    sol(N,roll);

    for (int i = 1; i <= rollOutput; i++)
    {
        for (int j = 1; j <= 70; j++)
        {
            cout << pattern[i][j];
        }
        cout << endl;
    }
    
}
void sol(int N, int* rollOutput)
{
    

    for (int i = 1; i <= N; i++)
    {
        int P, Q, R;

        cin >> P >> Q >> R;

        if (P > *rollOutput)
        {
            *rollOutput = P;
        }

        for (int j = 1; j <= 70; j++)
        {
            if (pattern[P][j] != 'x')
                pattern[P][j] = 'o';
        }

        for (int j = Q; j < Q + R; j++)
        {
            pattern[P][j] = 'x';
        }

    }
}
