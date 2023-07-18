// Isyana is given the no of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both
// of the following conditions :
// -> The number of visitors on the day is strictly larger than the no of visitors on each of the previous days.
// -> Either it is the last day, or the no of visitors on the day is strictly larger than the no of visitors on the following day.
// Note that the very first day could be a record breaking day!
// Pls help Isyana find out the number of record breaking days.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int days, count = 0;
    cout<<"Enter the number of Days : ";
    cin>>days;

    int arr[days], coumt = 0;
    cout<<"Enter the number of visitors in each day : ";
    for(int i = 0; i < days; i++)
    {
        cin>>arr[i];
    }
    int mx = arr[0];

    if(days == 1)
    {
        cout<<"1";
        return 0;
    }

    for(int i = 0; i < days; i++)
    {
        if((arr[i] > arr[i+1]) && (arr[i] > mx))
        {
            count++;
        }
        mx = max(arr[i], mx);
    }
    cout<<count;
}