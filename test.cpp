//Q1

//You are given an array of Unique Prime numbers where only one number is repeated. Find the
// repeated number in the most optimal way considering space and time used.
// e.g.
// input --> [11, 31, 17, 19, 59, 37, 31, 5]
// output --> 31, because 31 is repeated twice.

#include <bits/stdc++.h>
using namespace std;

// Time comp :- O(2N)
// space comp :- O(N)
int main()
{
    int n;cin>>n ;
    vector<int> a(n);
    
    for(int i = 0;i<n;i++){
      cin>>a[i]; 
    }
    
    // O(N)
    unordered_map<int,int> mp;
    
    // o(N)
    for(auto it : a){
        mp[it]++;
    }
    
    // O(N)
    for(auto it : mp){
        if(it.second>1){
            cout<<it.first<<endl;
            return 0;
        }
    }

    return 0;
}




//Q2
// Given an array of any number of only 0s, 1s and 2s in random order. Come up with the most
// optimal way of sorting this array.
// e.g.
// Input --> [1,0,2,0,0,0, 2,2,1,0,1]
// output --> [0,0,0,0,0,1,1,1,2,2,2]

#include <bits/stdc++.h>
using namespace std;

// Time comp :- O(N)
// space comp :- O(1)
int main()
{
    int n;cin>>n ;
    vector<int> a(n);
    
    for(int i = 0;i<n;i++){
      cin>>a[i]; 
    }
    
    int low = 0 ,m =0, high = n-1;
    
    while(m<=high){
       if(a[m]==1){
           m++;
       }
       else if(a[m]==0){
           swap(a[m],a[low]);
           m++;
           low++;
       }
       else{
           swap(a[m],a[high]);
           high--;
       }
    }
    
    for(auto it : a){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}