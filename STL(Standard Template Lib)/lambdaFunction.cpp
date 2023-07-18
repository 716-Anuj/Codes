#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x)
{
    return x > 0;
}

int main()
{
    //Lambda Function Syntax
    cout<<[](int x){return x+2;}(2)<<endl; //Adding number by 2

    cout<<[](int x, int y){return x+y;}(2, 3)<<endl; //Adding two number
    
    auto sum = [](int x, int y){return x+y;}; //Adding two number
    cout<<sum(3,1)<<endl;

    //all_of

    vector<int> v = {2, -1, 4};
    cout<<all_of(v.begin(), v.end(), [](int x){return x> 0;})<<endl;

    //any_of
    cout<<any_of(v.begin(), v.end(), [](int x){is_positive;});

    //none_of

    cout<<none_of(v.begin(), v.end(), [](int x){return x > 0;});
    
}