#include <bits/stdc++.h>
using namespace std;
string reversestring(string str)
	{
	    int len=str.length();
	    std::string::reverse_iterator it;
	    string s="";
	    for(it=str.rbegin();it!=str.rend();it++)
	    s=s+*it;
	    return s;
	}
int main() {
string st;
cin>>st;
cout<<reversestring(st);
	return 0;
}
