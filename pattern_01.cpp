#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,r;
    cout<<"Enter the number of rows : "<<endl;
    cin>>n;
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
