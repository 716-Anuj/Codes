// Given array a of n integers. All integers are present in even count except one.
// Find that one integer which has odd count in o(n) and O(1) space
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;
    int x;
    int ans = 0;

    cout<<"Enter the elements of the Array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>x;
        ans ^= x;
    }
    cout<<ans;

    // int freq[10];
    // for(int i = 0; i < 10; i++)
    // {
    //     freq[i] = 0;
    // }

    // for(int i = 0; i < size; i++)
    // {
    //     freq[arr[i]]++;
    // }
    // for(int i = 0; i < 10; i++)
    // {
    //     if(freq[i] %2 != 0)
    //     {
    //         cout<<i<<" : "<<freq[i]<<endl;
    //     }
    // }
}