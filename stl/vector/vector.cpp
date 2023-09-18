//array static and vector dynamic
// have to declare array size first. don't need to delclare vector size first
// array is fast and vector is slow

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector declare -- vector<data_type> v_name;
    vector<int> a;
    // input vector -- v_name.push_back(value)
    a.push_back(5);
    a.push_back(4);
    a.push_back(3);
    a.push_back(2);
    // after declare a vector we can access it like array
    cout<<"value of index 2 : "<<a[2]<<endl;
    a[2]=7;
    cout<<"modified value of index 2 : "<<a[2]<<endl;
    // vector size -- v_name.size()
    cout<<"vector size : "<<a.size()<<endl;
    // output the whole vector
    cout<<"vector all element : "; 
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
    // input vector from user
    cout<<"input vector from user\n";
    // to delete all element from a vector -- v_name.clear()
    a.clear();
    int n;
    cin>>n;
    for(int i=0;i<n;i++) 
    {
        int a1;
        cin>>a1;
        a.push_back(a1);
    }
    // another way of output the whole vector
    cout<<"vector element : ";
    for(auto u:a) cout<<u<<" ";


}