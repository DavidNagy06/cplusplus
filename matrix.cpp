#include <iostream>
using namespace std;
int main()
{
    int a[100][100];
    int n;
    cin>>n;
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            a[i][j] = i+j;
        }
    }
    cout<<"finished";
    return 0;
}