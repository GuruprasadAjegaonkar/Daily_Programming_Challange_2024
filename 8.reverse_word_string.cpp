#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        stack<string>st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch == ' '){
                if(temp!=""){
                    st.push(temp);
                }
                temp="";
            }
            else{
                temp+=ch;
            }
        }
        if(!temp.empty()){
            st.push(temp);
        }
        string ans="";
        while(!st.empty()){
            ans+=(st.top()+" ");
            st.pop();
        }
        ans.pop_back();
        return ans;
    }
};
int main(){
	string s="sky is blue";
	Solution obj;
	string ans=obj.reverseWords(s);
	cout<<ans;
	return 0;
}
