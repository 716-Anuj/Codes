// Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love
// with his old college!) He gets a list of students with their marks.The maximum marks which can be obtained in the exam is 100.

// The monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks.
// And if two student have same marks, they should be arranged in lexicographical manner.

// Help Monk prepare the same!
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, set<string>> m;
    int N;
    cout<<"Enter the number of Student : ";
    cin>>N;

    cout<<"Enter name and marks of the Student : "<<endl;
    for(int i = 0; i < N; i++)
    {
        int marks;
        string name;
        cin>>name>>marks;
        m[marks].insert(name);
    }

    for(auto it = m.rbegin(); it != m.rend(); it++)
    {
        for(auto value : it->second)
        {
            cout<<value<<" "<<it->first<<endl;
        }
    }
}