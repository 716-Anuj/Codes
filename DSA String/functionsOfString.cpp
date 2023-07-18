#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    
    //Append
    
    string s1 = "fam";
    string s2 = "ily";

    cout<<s1+s2<<endl;

    s1.append(s2);
    cout<<s1<<endl;

    //Accessing Character

    cout<<s1[4]<<endl;

    //Clear

    string str1 = "abc";
    str1.clear();
    cout<<str1<<endl;

    //Comapre

    string str2 = "bc";
    string str3 = "bc";
    cout<<str3.compare(str2)<<endl; //if equal then output 0

    //Empty

    if(str1.empty())
    {
        cout<<"String is Empty"<<endl;
    }

    //Erase (not require to shift an element from its position after deletion)

    string str4 = "anujpradhan";
    str4.erase(3, 4);// starting index, no. of charaters
    cout<<str4<<endl;

    //Find (like finding the substring)

    string str5 = "kakashihatake";
    cout<<str5.find("shi")<<endl; //returns the index

    //Insert

    str5.insert(7, "naruto");
    cout<<str5<<endl;

    //Size

    cout<<str5.size()<<endl;

    //Substring

    cout<<str5.substr(7, 6)<<endl;

    //String to int

    string str6 = "788";
    int x = stoi(str6);
    cout<<x-2<<endl;

    //Int to string

    int y = 790;
    string str7 = to_string(x);
    cout<<str7+"2"<<endl;
    
    //Sort (Header file : algorithm)

    sort(str5.begin(), str5.end());
    cout<<str5;

}