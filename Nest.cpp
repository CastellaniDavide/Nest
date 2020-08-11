#include <bits/stdc++.h>
using namespace std;

int N, bin, i;
int bin_binario=0;

int main()
{
//  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

    cin >> N >> bin;

    while(bin!=0)
    {
        bin_binario=bin_binario*2+bin%10;
        bin=bin/10;
    }
    for(i=bin_binario-1; i<N; i++)
    {
        cout << i <<endl;
    }
    for(i=0; i<bin_binario-1; i++)
    {
        cout << i <<endl;
    }


    return 0;
}
