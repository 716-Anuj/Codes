//     Our Monk loves candy!
//     While taking a stroll in the park, he stumbled upon N bags with candies. The ith of these bags contains Ai candies.
//     He picks up a bag, eats all the candies in it and drops it on the ground. But as soon as he drops the bag the number
//     of candies in the bag increases magically! say the bag that used to conatin X candies(before eating), now
//     contains [X/2] candies!, where [x] is the greatest integer less than x(GIF).
//     Amazed by the magical spell, Monk can now have a lot more candies! But he has to return home in K minutes.
//     In a single minute, Monk can consume all the candies in a single bag, regardless of the number of the candies in it.
//     Find the maximum number of candies that Monk can consume.
//     1 <= T <= 10
//     1 <= N <= 10^5
//     0 <= K <= 10^5
//     0 <= Ai <= 10^10

// We cant use set, as there can be 2 or more bags containing same number of candies

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<long long> s;
    int bag_size, min;
    long long sum = 0;
    cout<<"Enter the number of Bags : ";
    cin>>bag_size;

    cout<<"Enter the number of candies in each bag : ";
    for(int i = 0; i < bag_size; i++)
    {
        long long candy_ct;
        cin>>candy_ct;
        s.insert(candy_ct);
    }

    cout<<"Enter the time to return : ";
    cin>>min;

    while(min--)
    {
        auto last_itr = (--s.end());
        long long candy_ct = *last_itr;
        sum += *(last_itr);
        s.erase(last_itr);
        s.insert(candy_ct/2);
    }

    cout<<sum;
}