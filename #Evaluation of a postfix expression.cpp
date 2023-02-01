#include<bits/stdc++.h>
///#define p push_back;
using namespace std;
int main()
{
    int a,b,i;
    string s;///must contain 0 to
    cin>>s;
    stack<int>st;
    ///characater stack with st variable
    for(i=0; i<s.size(); i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {

            st.push(s[i]-48);///mane stack er modde push korbo aita s[i] take
        }
        else if(s[i]=='+')
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(a+b);
        }
        else if(s[i]=='-')
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.push(a-b);
        }
        else if(s[i]=='*')
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(a*b);
        }
        else if(s[i]=='/')
        {
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(a/b);
        }
    }
    cout<<st.top()<<endl;
}
