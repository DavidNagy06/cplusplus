#include <iostream>
using namespace std;
int main()
{
    int a[100][100];
    int n;
    int i;
    int j;
    int tmp=0;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i>1){
                j=i+1;
            }
            tmp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=tmp;
        }
    }
    cout<<endl;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}