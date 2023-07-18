// Consider the problem : There are N <= 5000 workers. Each worker is available during some days of this month (which has 30 days).
// For each worker, you are given a set of numbers, each interval[1, 30], representing his/ her avilability. You need to assign an important
// project to two workers but they will be able to work on the project only when they are both available. Find two workers that are best for 
// the job - maximize the number of days when both these workers are available
#include<bits/stdc++.h>
using namespace std;

void printBin(int num)
{
    for(int i = 10; i >= 0; i--)
    {
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number of Workers : ";
    cin>>n;
    printBin(10);

    vector<int> masks[n,0];

    for(int i = 0; i < n ; i++)
    {
        int num_workers;
        cin>>num_workers;
        int mask = 0;
        for(int j = 0; j < num_workers; j++)
        {
            int day;
            cin>>day;
           mask = (mask | (1 << day));
        }
        masks[i] = mask;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {

        }
    }

}