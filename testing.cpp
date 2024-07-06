#include <iostream>
#include <vector>
#include <numeric> // For std::gcd
#include<bits/stdc++.h>
using namespace std;


int main() {



//vector to set
vector<int>nums{1,2,3,4,5,1,2,3,4};
set<int>st(nums.begin(),nums.end());
for(auto it=st.begin();it!=st.end();++it){
    cout<<*it<<" ";
}


// string num="10001";
// cout<<stoi(num,0,2)<<endl;

// string gg=bitset<8>(17).to_string();
// int ans=stoi(gg);
// cout<<ans<<endl;

// cout<<bitset<8>(17);

// int n;
// cin>>n;
// int ans=0;
// while(n--){
//     int num;
//     cin>>num;
//     ans=ans*10+num;
// }
// cout<<ans;

//     string ans2="10 hello";
//     int ans=atoi(ans2.c_str());
//     cout<<ans;
// cout<<endl;
//     int n;
//     cin>>n;
//     string pp=to_string(n);
//     cout<<pp<<endl;
    // int n;
    // cin>>n;
    // vector<int>nums;
    // while(n!=0){
    //     int num;
    //     cin>>num;
    //     nums.push_back(num);  
    //     n--;  
    // }
    // string s;
    // for(auto x:nums){
    //     s+=to_string(x);
    // }
    // int ans=stoi(s,0,2);
    // cout<<ans;


}
