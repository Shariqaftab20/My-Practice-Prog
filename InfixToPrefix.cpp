#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int preced(char ch)
{
    if(ch == '^')
    return 3;
    if(ch == '/' || ch == '*')
    return 2;

    if(ch == '+' || ch == '-')
    return 1;

    return -1;
}
int main()
{
    stack<char> st;
    string s,result="";
    cin>>s;
    //cout<<s<<s.length()<<endl;
    for(int i = 0 ; i < s.length() ; i++)
    {
        char ch = s[i];
        if( ch >= 'a' && ch <= 'z')
        {
            //cout<<"yes";
            result+=ch;
        }
        else if( ch == '(' )
        st.push(ch);
        else if( ch == '^')
        st.push(ch);
        else if( ch == ')') 
        {
         while(!st.empty() &&  st.top() != '(') 
         {
            result += st.top(); //store and pop until ( has found
            st.pop();
         }
         st.pop();
        }
        else
        {
        if (st.empty())
            st.push(ch);
        else if( !st.empty() && preced(ch)>preced(st.top()))
            st.push(ch);
        else 
        {
            while( !st.empty() && preced(ch)<=preced(st.top()) )
            {
                result+=st.top();
                st.pop();
            }
            st.push(ch);
        }
        }
    }
        while(!st.empty()) {
      result += st.top();        
      st.pop();
   }
    //cout<<"Ma ka Bhosra ";
    cout<<result;
return 0;
}