// #include<iostream>
// using namespace std;
// void prime(int ll, int ul)
// {
//     int flag = 0;
//     x : for(int i = 2; i < ll; i++)
//     {
//         if(ll == 2)
//         {
//             flag = 0;
//         }
//         else if(ll % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//         else{
//             flag = 0;
//         }
//     }
    
//     if(flag == 0)
//     {
//         cout<<ll<<" ";
//     }
//     ll++;
//     if(ll < ul)
//     goto x;

// }

// int main()
// {
//     int ll, ul;
//     cout<<"Enter lower and upper limit to find Prime Number except 1 : ";
//     cin>>ll>>ul;
//     prime(ll, ul);
// }
#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num)
{
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cin>>a>>b;
    for(int i = a; i <=b; i++)
    {
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}