// Print the instruction to move the disks from tower 1 to tower 2 using tower 3 and
// following the rules : 
// move 1 disk at a time 
// never place a smaller under a larger
// you can only move a disk at the top
// Output
// 3 (disk) 10 11 12
// 1[10 -> 11]
// 2[10 -> 12]
// 1[11 -> 12]
// 3[10 -> 11]
// 1[12 -> 10]
// 2[12 -> 11]
// 1[10 -> 11]
#include<bits/stdc++.h>
using namespace std;

void tower(int disk, int t1, int t2, int t3)
{
    if(disk == 0)
    {
        return;
    }
    tower(disk-1, t1, t3, t2); // will print the instruction to move disk -1 ftom t1 to t3 usong t2 
    cout<<disk<<"["<<t1<<" -> "<<t2<<"]"<<endl; //moving last disk to t2
    tower(disk-1, t3, t2, t1);
}

int main()
{
    int disk, t1, t2, t3;
    cout<<"Enter the number of Disk : ";
    cin>>disk;
    cout<<"Enter the 3 tower number : ";
    cin>>t1>>t2>>t3;

    tower(disk, t1, t2, t3);
}