#include<bits/stdc++.h>
using namespace std;

int main()
{
    string text, pattern;

    getline(cin, text);
    getline(cin, pattern);                        ///Getting Input

    bool flag;                                    ///Pattern Matching Indicator

    for(int i=0;i<=text.size()-pattern.size();i++)
    {
        flag=true;

        for(int j=0;j<pattern.size();j++)         ///Checking for pattern
            if(pattern[j]!=text[j+i])
            {
                flag=false;
                break;
            }

        if(flag==true)                          ///Printing starting index number if match found

            cout<<"Match found from index: "<<i<<endl;
    }

    return 0;
}
