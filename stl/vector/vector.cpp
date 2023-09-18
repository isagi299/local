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
    cout<<endl;

    // to check if the vector is empty or not -- v_name.empty(); return 1 if empty else 0
    cout<<"check vector empty or not : ";
    cout<<a.empty()<<endl;

    // to resize a vector -- v_name.resize(size)
    cout<<"before resize : ";
    cout<<a.size()<<endl;
    a.resize(8);
    cout<<"after resize : ";
    cout<<a.size()<<endl;


    // we declare size and value of vector -- vector<int>v_name(size);
    // vector<data_type> v_name(size,value) --> it will create a vector of size with all the element of value
    // vector<data_type> v_name={1,3,4,5,6}

    // we can copy vector -- v1_name=v2_name;
    vector<int> b;
    b=a;
    cout<<"b element : ";
    for(auto u:b) cout<<u<<" ";
    cout<<endl;

    // sorting -- sort(v.begin(),v.end());
    // v.begin() is the address of first element of a vector
    // v.end() is the address of last element + 1 of a vector

    sort(b.begin(),b.end());
    cout<<"b element : ";
    for(auto u:b) cout<<u<<" ";
    cout<<endl;

    // sort a proper range -- sort(v.begin()+index_intial,v.begin_last+index+1)
    // sorting in decreasing order -- sort(v.rbegin(),v.rend())
    // sorting in decreasing order -- sort(v.begin(),v.end(),greater<int>())
    // sort a proper range in decreasing order -- sort(v.begin()+index_intial,v.begin_last+index+1,greater<int>())
    sort(b.rbegin(),b.rend());
    cout<<"b element decreasing order : ";
    for(auto u:b) cout<<u<<" ";
    cout<<endl;
    
    // vector element erase -- erase(v.begin+index)
    cout<<"second index : ";
    cout<<b[1];
    cout<<endl;
    b.erase(b.begin()+1);
    cout<<"after erase second index : ";
    cout<<b[1];
    cout<<endl;

    // know the first element -- v.front()
    // know the last element -- v.back()
    // delete the last element -- v.pop_back()

    // unique value
    cout<<"unique element : ";
    sort(b.begin(),b.end());
    int u=unique(b.begin(),b.end())-b.begin();
    for(int i=0;i<u;i++) cout<<b[i]<<" ";
    cout<<endl;

    // max element and min element -- *max_element(v.begin(),v.end()) *min_element(v.begin(),v.end())
    int max1=*max_element(b.begin(),b.end());
    int min1=*min_element(b.begin(),b.end());
    cout<<"max element = "<<max1<<"\n"<<"min element = "<<min1<<endl;

    // itarator -- vector<data_type>::iterator it_name;
    vector<int>::iterator it;
    for(it=b.begin();it!=b.end();it++) cout<<*it<<" ";
    cout<<endl;

    // reverse -- reverse(v.begin(),v.end())
    // reverse -- reverse(v.rbegin(),v.rend())
    
    

}