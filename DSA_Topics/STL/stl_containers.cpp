#include<bits/stdc++.h>//all the libraries included in one go
using namespace std;

// Pairs
void explainPair(){
    pair<int,int>p={1,3};//p-{1,3}
    cout<<p.first<<" "<<p.second<<endl;
    pai<int,pair<int,int>>p={1,{3,4}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    pair<int,int>arr[]={{1,2},{2,5},{5,6}};
    cout<<arr[1].second<<endl;
}

//Containers + Iterators
// 1. Vectors: it stores dynamic array, array size can be changed ->single linked list
void explainVector(){
    //declaration of a vector
    vector<int> v; // {}
    v.push_back(1);//{1}
    v.emplace_back(2);//{1,2} //more efficient

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,3);//automatically consider it as a pair

    vector<int> v(5,100);//{100,100,100,100,100}// declare 5 instaces of 100
    vector<int> v2(5);//{0,0,0,0,0}//if no value provided, it will be either 0 or garbage value

    vector<int> v1(5,20);//{20,20,20,20,20}
    vector<int> v2(v1);//copy of v1

    //use of iterators in vector
    // 1. begin() -> points to the first element
    // 2. end() -> points to the next of the last element ('\n' value-garbage value)
    // 3. rbegin() -> points to the last element
    // 4. rend() -> points to the previous of the first element
    vector<int>::iterator it=v.begin();//points to the first element
    //v.begin() -> points to the memory location of the first element, not the value of element 
    it++;
    cout<<*(it)<<endl;//* is used to get the value of the element

    it = it+2;
    cout<<*(it)<<endl;

    vector<int>::iterator it = v.end();//points to the next of the last element ('\n' value-garbage value)
    vector<int>::iterator it = v.rbegin();//points to the last element
    vector<int>::iterator it = v.rend();//points to the previous of the first element ('\n' value-garbage value)

    cout<<v[0]<<" "<<v.at[0];//both are same, but v.at() is more safe
    cout<<v.back()<<" "<<v.front()<<endl;//back() gives the last element, front() gives the first element
    cout<<v.size()<<endl;//gives the size of the vector
    cout<<v.capacity()<<endl;//gives the capacity of the vector
    cout<<v.max_size()<<endl;//gives the maximum size of the vector

    //print a vector
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<endl;
    }

    for(auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<endl;
    }//auto keyword is used to automatically detect the data type of the variable

    for(auto it:v){
        cout<<it<<" ";
    }//auto treats it as an integer,not as an iterator, so no need to use * to get the value

    //deletion of a vector 
    //{10,12,34,33,14}
    v.erase(v.begin());//erase the first element  - {12,34,33,14}
    v.erase(v.begin()+1);//erase the second element  - {10,34,33,14}
    v.erase(v.begin()+2,v.begin()+4);//erase the first two elements - {10,12,14} {start,end}

    //insertion in a vector
    vector<int>v(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+1,2,10);{300,10,10,100,100}

    vector<int>copy(2,50);//{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}

    v.pop_back();//removes last element

    v1.swap(v2);//swaps the elements of v1 and v2
    v1.clear();//clears all the elements of v1
    v1.empty();//returns true if the vector is empty, else false

}

//2.List: Similar to vectors, but gives more front functions ->double linked list
void explainList(){
    list<int>ls;
    ls.push_back(1);//{1}
    ls.emplace_back(2);//{1,2}
    ls.push_front(3);//{3,1,2}
    ls.emplace_front(4);//{4,3,1,2}

    //rest of the functions are same as vectors    
}

//3. Deque: Double ended queue, can insert and delete elements from both the ends
void explainDeque(){
    deque<int>dq;
    dq.push_back(1);//{1}
    dq.emplace_back(2);//{1,2}
    dq.push_front(3);//{3,1,2}
    dq.emplace_front(4);//{4,3,1,2}

    dq.pop_back();//{4,3,1}
    dq.pop_front();//{3,1}

    dq.front();//gives the first element
    dq.back();//gives the last element

    //rest of the functions are same as vectors
}

//4.Stack: LIFO, can insert and delete elements from only one end - push,pop,top
void explainStack(){
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(3);//{3,3,2,1}
    st.emplace(5);//{5,3,3,2,1}

    cout<<st.top();//gives the top element-5 (still in the stack)

    st.pop();//{3,3,2,1} - removes the top element
    cout<<st.top();//gives the top element-3(now 5 is not there)
    cout<<st.size();//gives the size of the stack
    cout<<st.empty();//returns true if the stack is empty, else false
    stack<int>st1,st2;
    st1.swap(st2);//swaps the elements of st1 and st2

    //o(n) time complexity - o(1)

}

//Queue: FIFO, can insert and delete elements from both the ends - push,pop,front,back
void explainQueue(){
    queue<int> q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.emplace(3);//{1,2,3}

    q.back()+=5;//{1,2,8}
    cout<<q.front();//gives the front element :1

    q.pop();//{2,8}
    cout<<q.front();//gives the front element :2

    //size,swap,empty same as stack

}

//Priority Queue : elements are stored in a sorted order(the largest element is always at the top), can insert and delete elements from only one end - push,pop,top
//data is not stored in linear order, its a tree structure
void explainPQ(){
    //MAX HEAP
    priority_queue<int>pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}

    pq.top();//gives the top element : 10
    pq.pop()://{8,5,2}

    //size,swap,empty same as stack

    //min priority queue
    //MIN HEAP
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);//{5}    
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}

    pq.top();//gives the top element : 2
    pq.pop()://{5,8,10}

}

push() - o(logn)
pop() - o(logn)
top() - o(1)

//Set: stores unique elements in a sorted order
void explainSet(){
    set<int> st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2} - 2 is not inserted as it is already present- unique elements
    st.emplace(4);//{1,2,4} 
    st.emplace(3);//{1,2,3,4} - automatically sorted

    //rest of the functions are same as vectors

    auto it = st.find(3);//returns the iterator of the element 3    
    auto it = st.find(6);//returns the iterator of the element 6, if not present, it will return st.end()

    st.erase(3);//{1,2,4}

    int count = st.count(3);//returns the count of the element 3 : 1 (if present, else 0)
    auto it = st.find(3);//returns the iterator of the element 3
    st.erase(it);//erases the element 3

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);//erases the elements between it1 and it2 [it1,it2) : {1,4} - it2 is not included

    //lower bound and upper bound
    auto it = st.lower_bound(2);//returns the iterator of the element 2
    auto it = st.upper_bound(2);//returns the iterator of the element 3

    //o(logn) time complexity

}

//Multiset: stores multiple elements in a sorted order - unique
void explainMultiset(){
    multiset<int> st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2,2} - 2 is inserted as it is not unique
    st.emplace(4);//{1,2,2,4} 
    st.emplace(3);//{1,2,2,3,4} - automatically sorted

    //rest of the functions are same as vectors

    st.erase(2);//{1,2,2,4} - all the elements 2 are removed

    int count = st.count(2);//returns the count of the element 2 : 2 (if present, else 0)

    //only a single occurance to be erased
    st.erase(st.find(2));//erases the element 2
    st.erase(st.find(2), st.find(2)+2);//erases the first two elements 2

    //o(logn) time complexity

}

//Unordered Set: stores unique elements in a random order
void explainUSet(){
    unorded set<int> st;
    // same functions as set
    //o(1) time complexity
    //lower_bound and upper_bound functions are not available in unordered set

}

//Maps : Key-value pairs - unique keys in sorted order of key
void explainMap(){
    map<int,int> mp;
    map<int, pair<int,int>> mp;
    map<pair<int,int>,int> mp;

    mp[1] = 2;// one key'1' stores '2'.
    mp.emplace({3,1});
    mp.insert({2,4});

    mp[{2,3}] = 10;//[{2,3},{10}]
    {
        {1,2}
        {2,4}
        {3,1}
    }
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;        
    }

    cout<mp[1];//prints 2
    cout<<mp[5];//prints 0 or null.

    //to find the address of iterator 
    auto it = mp.find(3);
    cout<<*(it).second;

    auto it = mp.find(5);//ap.end() if 5 is not there

    auto it = mp.lower_bound(2);
    auto it = mp.upper_bound(3);
    
    //rest same 
    // O(log n)

}

void explainMultiMap(){
    //same as map , only can store multiple,duplicate keys 

}

void unorderedMap()
{
    // same but not sorted
    //unique keys 
    //o(1) - in allmost all cases 
    //worst case - O(n)
}





























