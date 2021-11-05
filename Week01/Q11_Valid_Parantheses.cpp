#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

bool isValid(string s) {
        stack<char>st;
        char y;
        for(int i=0;i<(int)s.length();i++)
        {
            if(s[i]=='(' ||s[i]=='['|| s[i]=='{')
                st.push(s[i]);
            else
            {
                if(st.empty())
                    return false;
                else
                {
                    switch(s[i])
                    {
                        case ')':
                            y=st.top();
                            st.pop();
                            if(y=='{'||y=='[')
                                return false;
                            break;
                        case ']':
                            y=st.top();
                            st.pop();
                            if(y=='{'||y=='(')
                                return false;
                            break;
                        case '}':
                            y=st.top();
                            st.pop();
                            if(y=='['||y=='(')
                                return false;
                            break;
                    }
                }
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }