#include <bits/stdc++.h>
using namespace std;

int modifyBit(int n, int p, int b)
{
    int mask = 1 << p;
    return ((n & ~mask) | (b << p));
}

int main()
{
    int n,pos,Bit;
    cout<<"Enter the number , position of the bit to modify and Action to perform that is to set or unset\n";
    cin>>n>>pos>>Bit;
    cout << modifyBit(n, pos, Bit) << endl;
    return 0;
}


