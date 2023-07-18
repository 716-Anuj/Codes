#include<iostream>
using namespace std;

void pythagorianTriplet(int largest, int x, int y, int z)
{
    if(largest == x && (x*x == y*y + z*z))
    {
        cout<<"Pythagorian Triplet";
    }
    else if(largest == y && (y*y == x*x + z*z))
    {
        cout<<"Pythagorian Triplet";
    }
    else if(largest == z && (z*z == y*y + x*x))
    {
        cout<<"Pythagorian Triplet";
    }
    else{
        cout<<"Not a Pythagorian Triplet";
    }
}

int main()
{
    int x, y, z, largest;
    cout<<"Enter three sides of the Triangle : ";
    cin>>x>>y>>z;
    largest = (x > y && x >z) ? x : (y > z && y > x) ? y : z;
    pythagorianTriplet(largest, x, y, z);
    
}