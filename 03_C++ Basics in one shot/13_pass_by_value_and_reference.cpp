// pass by value and pass by referenece


// pass by value
#include<bits/stdc++.h>
using namespace std;
/*
void doSomething(int num)
{
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main()
{
    int num = 10;
    doSomething(num);
    cout<<num<<endl;       //here it will print 10 , i.e pass by value that the value remains the same 
}
*/

// pass by referenece - & means address
// eg1 :
/*
void doSomething(string &s)
{
    s[0] = 't';
    cout<<s<<endl;
}
int main()
{
    string s = "raj";
    doSomething(s);
    cout<<s<<endl;
    

    return 0;
}
*/
// eg2:
void doSomething(int &num)
{
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;

}
int main()
{
    int num=10;
    doSomething(num);
    cout<<num<<endl;

    return 0;

}
