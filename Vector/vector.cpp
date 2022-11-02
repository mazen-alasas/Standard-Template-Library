#include <iostream>
#include <vector>               /// import Vector library
using namespace std;
int main()
{

/// vector<Datatype>VectorName;
/// vector<Datatype>VectorName(No.elements);
  
    vector<int>v1(4);           /// as array of elements
                                /// int arr[4]
                                /// zero inbex
                                /// default value is zeros & in array
                                /// v --> {0,0,0,0}
    v1[0]=9;                    /// v --> {9,0,0,0}
    /// add element to vector
    v1.push_back(45);           /// v --> {9,0,0,0,45}
    int len = v1.size();        /// to get size or length of vector
    cout<<"vector 1 : ";
    for(int i=0;i<len;i++)      /// to print element of vector like array
        cout<<v1[i]<<" ";
    cout<<endl;

/// vector<Datatype>VectorName(No.elements,value of all elements);
    vector<int>v2(4,4);         /// create vector of 4 elements and they are equal 4
    cout<<"vector 2 : ";
    for(int i=0;i<v2.size();i++)/// {4,4,4,4}
        cout<<v2[i]<<" ";
    cout<<endl;

/// assign vectors when Declaration
    vector<int>v3(v2);
    cout<<"vector 3 : ";
    for(int i=0;i<v3.size();i++)/// {4,4,4,4}
        cout<<v3[i]<<" ";
    cout<<endl;
/// assign
    v3=v1;
    cout<<"vector 3 : ";
    for(int i=0;i<v3.size();i++)/// {9,0,0,0,45}
        cout<<v3[i]<<" ";
    cout<<endl;

/// swapping
    vector<int>v4(4,3),v5(7,2);/// v4 = {3,3,3,3}
                               /// v5 = {2,2,2,2,2,2,2}
    swap(v4,v5);
    cout<<"vector 4 : ";
    for(int i=0;i<v4.size();i++)/// {2,2,2,2,2,2,2}
        cout<<v4[i]<<" ";
    cout<<endl;
    cout<<"vector 5 : ";
    for(int i=0;i<v5.size();i++)/// {3,3,3,3}
        cout<<v5[i]<<" ";
    cout<<endl;

/// front(),back()
    vector<int>v6;
    v6.push_back(10);
    v6.push_back(11);
    v6.push_back(12);
    cout<<"first element : "<<v6.front()<<" ,last element : "<<v6.back()<<endl;

/// at();
    vector<int>v7 = {7,1,9,4,5,2,4};
    cout<<"v.at(0) : "<<v7.at(0)<<" ,v[0] : "<<v7[0]<<endl;

/// pop_back() --> remove last element
    v7.pop_back();


/// iterator --> like pointer
    vector<int>::iterator t=v7.begin(); /// Points to the first element of vector
    cout<<"vector 7 : ";
    for(int i=0;i<v7.size();i++){    /// {7,1,9,4,5,2}
        cout<<*t<<" ";
        t++;
    }
    cout<<endl;

/// another way to print elements
    vector<int>::iterator t2=v7.begin();
    cout<<"vector 7 : ";
    for(t2;t2!=v7.end();t2++){    /// {7,1,9,4,5,2}
        cout<<*t2<<" ";
    }
    cout<<endl;

/// posh_back(); to push the value to the vector
    vector<int>v8;
    int input;
    cout<<"vector 8 : ";
    for(int i=0;i<5;i++){
        cin>>input;
        v8.push_back(input);
    }

/// sorting vactor
    cout<<"vector 8 : ";
    sort(v8.begin(),v8.end());
    for(int i=0;i<5;i++){
        cout<<v8[i]<<" ";
    }
    cout<<endl;
	
/// reverse vector
	vector<int> vec={11,99,33,88,55,66};
    reverse(vec.begin(),vec.end());

    for(auto i : vec)
        cout << i << " ";	/// 66 55 88 33 99 11
	cour << endl;
    cout << *min_element(vec.begin(),vec.end()) << " ";  // 11
    cout << *max_element(vec.begin(),vec.end());    	 // 99

/// empty();   return 1 if vector is empty else return 0
    cout<<"is vector 8 empty? "<<v8.empty()<<endl;

/// clear();   to clear all elements
    v8.clear();
    cout<<"size of vector 8 : "<<v8.size()<<endl;


	return 0;
}
