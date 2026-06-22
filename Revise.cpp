// Revising DSA concepts after long time
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<fstream>
#include<sstream>
using namespace std;

// // Array and Vector

// // Find Largest Element in an Array
// int main(){
//     ifstream myinput("input.txt");
//     string tstr;
//     vector<int>vec;
//     while(getline(myinput,tstr)){
//         stringstream ss(tstr);
//         int temp;
//         while(ss>>temp){
//             vec.push_back(temp);
//         }
//     }
//     int max=0;
//     for (int i=0;i<vec.size();i++) if(vec[i]>max) max=vec[i];
//     ofstream myoutput("output.txt");
//     myoutput<<max;
// }

// // Check if Array is Sorted
// int main(){
//     ifstream myinput("input.txt");
//     string tstr;
//     vector<int> vec;
//     while(getline(myinput,tstr)){
//         stringstream ss(tstr);
//         int temp;
//         while(ss>>temp){
//             vec.push_back(temp);
//         }
//     }
//     bool check=true;
//     int n=vec.size()-1;
//     for(int i=1;i<n;i++){
//         if(vec[i]<vec[i-1]) check=false;
//     }
//     if(vec[n-1]>vec[n]) check=false;
//     ofstream myoutput("output.txt");
//     if(check) myoutput<<"Array is fully sorted";
//     else myoutput<<"Array is not Sorted";
//     return 0;
// }

// // Move Zeroes to End
// int main(){
//     ifstream myinput("input.txt");
//     if(!myinput){
//         cerr<<"Error: Not able to access input file";
//         return 1;
//     }
//     string tstr;
//     vector<int>vec;
//     while(getline(myinput,tstr)){
//         int temp;
//         stringstream ss(tstr);
//         while(ss>>temp){
//             vec.push_back(temp);
//         }
//     }
//     vector<int> temp;
//     int ctr=0;
//     for(int i=0;i<vec.size();i++){
//         if(vec[i]!=0)temp.push_back(vec[i]);
//         else ctr++;
//     }
//     while(ctr!=0){
//         temp.push_back(0);
//         ctr--;
//     }
//     vec=temp;
//     ofstream myoutput("output.txt");
//     if(!myoutput){
//         cerr<<"Error: Not able to open the file";
//         return 1;
//     }
//     for(const auto &num:vec) myoutput<<num<<" ";
// }

// // Remove Duplicates from Sorted Array
// int main(){
//     ifstream myinput("input.txt");
//     string targetstr;
//     vector<int>vec;
//     vector<int>result;
//     if(!myinput){
//         cerr<<"Error: Input can't be accessed";
//         return 1;
//     }
//     while(getline(myinput,targetstr)){
//         int temp;
//         stringstream ss(targetstr);
//         while(ss>>temp) vec.push_back(temp);
//     }
//     if(!vec.empty()){
//         result.push_back(vec[0]);
//         for(int i=1;i<vec.size();i++){
//             if(vec[i]!=vec[i-1]){
//                 result.push_back(vec[i]);
//             }
//         }
//     }
//     ofstream myoutput("output.txt");
//     if(!myoutput){
//         cerr<<"Error: Output can't be shown";
//         return 1;
//     }
//     for(int x:result){
//         myoutput<<x<<" ";
//     }
//     myinput.close();
//     myoutput.close();
// }

// // Remove Duplicates from Sorted Array (Without File Input and vector)
// int main(){
//     int n;
//     cout<<"Enter number of elements: ";
//     cin>>n;
//     if(n<=0){
//         cout<<"No Input";
//         return 0;
//     }
//     cout<<"Enter Elements: ";
//     int ptr;
//     cin>>ptr;
//     cout<<ptr<<" ";
//     for(int i=1;i<n;i++){
//         int x;
//         cin>>x;
//         if(ptr!=x){
//             cout<<x<<" ";
//             ptr=x;
//         }
//     }
//     return 0;
// }

// // Rotate Array by K Places
// int main(){
//     int n;
//     cout<<"Enter number of elements: ";cin>>n;
//     vector<int>arr;
//     cout<<"Elements: "
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     int k;
//     cout<<"Enter no of places to rotate: ";cin>>k;
//     k%=n;
//     // // Approach-1 (Few Problems)
//     // for(int i=0;i<k;i++) arr.push_back(arr[i]);
//     // for(int i=0;i<k;i++){
//     //     for(int j=0;j<n+k-i;j++){
//     //         arr[j]=arr[j+1];
//     //     }
//     // }
//     // // Approach-2 (Optimal)
//     // reverse(arr.begin(),arr.begin()+k);
//     // reverse(arr.begin()+k,arr.end());
//     // reverse(arr.begin(),arr.end());
//     // // Approach-3
//     // vector<int>temp;
//     // for(int i=k;i<n;i++)temp.push_back(arr[i]);
//     // for(int i=0;i<k;i++)temp.push_back(arr[i]);
//     // arr=temp;
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
// }

// Binary Search Practice

// // Binary Search
// int recursivebinsearch(vector<int>&arr,int left,int right,int target){
//     if(left>right) return -1;
//     int mid=left+(right-left)/2;
//     if(arr[mid]==target) return mid;
//     else if(target<arr[mid]) recursivebinsearch(arr,left,mid-1,target);
//     else recursivebinsearch(arr,mid+1,right,target);
// }
// int main(){
//     int n;
//     vector<int>arr;
//     cout<<"Enter number of elements: ";cin>>n;
//     cout<<"Enter Elements: ";
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     int t;
//     cout<<"Enter Target: ";cin>>t;
//     int result=recursivebinsearch(arr,0,n-1,t);
//     if(result!=-1) cout<<"Target "<<t<<" found at : "<<result;
//     else cout<<"Target not found";
// }

// // Binary Search (Iterative)
// int main(){
//     int n;
//     vector<int>arr;
//     cout<<"Enter number of elements: ";cin>>n;
//     cout<<"Enter Elements: ";
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     int t;
//     cout<<"Enter Target: ";cin>>t;
//     bool found=false;
//     int left=0,right=n-1;
//     while(left<=right){
//         int mid=left+(right-left)/2;
//         if(arr[mid]==t){
//             cout<<"Element found at "<<mid;
//             return 0;
//         }else if(arr[mid]<t){
//             left=mid+1;
//         }else if(arr[mid]>t){
//             right=mid-1;
//         }
//     }
//     if(!found) cout<<"Element not found";
// }

// // First and Last Occurrence of Element
// int main(){
//     int n;
//     cout<<"Enter number of elements: ";cin>>n;
//     vector<int>arr(n);
//     cout<<"Enter Elements: ";
//     for (int i=0;i<n;i++) cin>>arr[i];
//     int k,first=-1,second=-1;
//     cout<<"Enter element: ";cin>>k;
//     int left=0,right=n-1;
//     while(left<=right){
//         int mid=left+(right-left)/2;
//         if(arr[mid]==k){
//             first=mid;
//             right=mid-1;
//         }
//         else if (arr[mid]<k) left=mid+1;
//         else if (arr[mid]>k) right=mid-1;
//     }
//     left=0,right=n-1;
//     while(left<=right){
//         int mid=left+(right-left)/2;
//         if(arr[mid]==k ){
//             second=mid;
//             left=mid+1;
//         }
//         else if (arr[mid]<k) left=mid+1;
//         else if (arr[mid]>k) right=mid-1;
//     }
//     cout<<first<<" "<<second;
// }

// // Search Insert Position
// int main(){
//     int n;
//     cout<<"Enter number of elements: ";cin>>n;
//     vector<int>arr;
//     cout<<"Enter elements: ";
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     int x;
//     cout<<"Enter element to find position: ";cin>>x;
//     int left=0,right=n-1;
//     while(left<=right){
//         int mid=left+(right-left)/2;
//         if(arr[mid]==x){
//             cout<<"Element can be inserted at : "<<mid;
//             return 1;
//         }
//         else if(arr[mid]<x) left=mid+1;
//         else if(arr[mid]>x) right=mid-1;
//     }
//     cout<<"Eleemnt can be inserted at : "<<left;
// }

// // Find Peak Element
// int main(){
//     int n;
//     cout<<"Enter number of elements: ";cin>>n;
//     vector<int>arr(n);
//     cout<<"Enter elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int left=0,right=n-1;
//     while(left<right){
//         int mid=left+(right-left)/2;
//         if(arr[mid+1]>arr[mid]) left=mid+1;
//         else right=mid;
//     }
//     cout<<"Peak Element : "<<arr[left]<<" found at : "<<left;
//     return 0;
// }

// // Search in Rotated Sorted Array
// int main(){
//     int n;
//     cout<<"Enter no of elements: ";cin>>n;
//     vector<int>vec(n);
//     for(int i=0;i<n;i++)cin>>vec[i];
//     int target;
//     cout<<"Enter target Value: ";cin>>target;
//     int left=0,right=n-1;
//     while(left<=right){
//         int mid=left+(right-left)/2;
//         if(vec[mid]==target){
//             cout<<mid;
//             return 0;
//         }
//         if(vec[left]<=vec[mid]){
//             if(target>=vec[left] && target<vec[mid])
//                 right=mid-1;
//             else
//                 left=mid+1;
//         }
//         else{
//             if(target>vec[mid] && target<=vec[right])
//                 left=mid+1;
//             else
//                 right=mid-1;
//         }
//     }
//     cout<<"Not found";
// }

// How does Binary Search can be used on non sorted arrays

// Strings Practice

// // Reverse String
// int main(){
//     int n;
//     cout<<"Enter length: ";
//     cin>>n;
//     string s(n,' ');
//     cout<<"Enter string: ";
//     for(int i=0;i<n;i++) cin>>s[i];
//     int left=0,right=n-1;
//     while(left<right){
//         swap(s[left],s[right]);
//         left++;
//         right--;
//     }
//     for(int i=0;i<n;i++) cout<<s[i];
// }

// // Check Palindrome
// int main(){
//     int n;
//     cout<<"Enter length: ";cin>>n;
//     string a(n,' ');
//     cout<<"Enter string: ";
//     for(int i=0;i<n;i++) cin>>a[i];
//     string r=a;
//     reverse(a.begin(),a.end());
//     if(a==r) cout<<"Palindrome";
//     else cout<<"Not a Palindrome";
// }

// // Valid Anagram
// int main(){
//     int n1,n2;
//     cout<<"Enter length of first element: ";cin>>n1;
//     cout<<"Enter length of second element: ";cin>>n2;
//     if(n1!=n2){
//         cout<<"Not an Anagram";
//         return 0;
//     }
//     string a1(n1,' '), a2(n2,' ');
//     cout<<"Enter first element: ";
//     for(int i=0;i<n1;i++) cin>>a1[i];
//     cout<<"Enter second element: ";
//     for(int i=0;i<n2;i++) cin>>a2[i];
//     sort(a2.begin(),a2.end());
//     sort(a1.begin(),a1.end());
//     if(a1==a2)cout<<"Valid Anagram";
//     else cout<<"Not an Anagram";
//     return 0;
// }

// // Longest Common Prefix
// int main(){
//     int n;
//     cout<<"Enter number of words: ";cin>>n;
//     vector<string>arr(n," ");
//     cout<<"Enter Words: ";
//     for(int i=0;i<n;i++)cin>>arr[i];
//     string mincom=arr[0];
//     for(int i=1;i<n;i++){
//         string temp="";
//         int len=min(mincom.size(),arr[i].size());
//         for(int j=0;j<len;j++){
//             if (mincom[j]==arr[i][j]) temp+=mincom[j];
//             else break;
//         }
//         mincom=temp;
//         if(mincom.empty()) break;
//     }
//     if(!mincom.empty()) cout<<"Longest Common Prefix Value is: "<<mincom;
//     else cout<<"No common prefix found";
//     return 0;
// }

// // Longest Substring Without Repeating Characters
// int main(){
//     int n;
//     cout<<"Enter number of elements: ";cin>>n;
//     string str;
//     cout<<"Enter string: ";cin>>str;
//     vector<int>last(256,-1);
//     int start=0;
//     int maxLen=0;
//     int maxStart=0;
//     for(int i=0;i<n;i++){
//         start=max(last[str[i]]+1,start);
//         if(i-start+1>maxLen){
//             maxLen=i-start+1;
//             maxStart=start;
//         }
//         last[str[i]]=i;
//     }
//     cout<<"Longest Substring without repeating characters with length: "<<maxLen<<" "<<str.substr(maxStart,maxLen);
// }

// LinkedList

struct Node{
    int data;
    Node *next;
};

// Traverse Linked List
void printNode(Node *head){
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

void createNode(Node *&temp,Node *&head,Node *&newNode){
    int choice=1;
    while(choice){
        newNode=new Node();
        cout<<"Enter data: ";
        cin>>newNode->data;
        newNode->next=nullptr;
        if(head==nullptr) head=temp=newNode;
        else{
            temp->next=newNode;
            temp=newNode;
        }
        cout<<"Do you want to continue(1/0): ";
        cin>>choice;
    }
    printNode(head);
}

// Insert at Beginning
void insertAtBegin(Node *&head){
    Node *newNode;
    newNode=new Node();
    cout<<"Enter Data to insert at beginning: ";
    cin>>newNode->data;
    newNode->next=head;
    head=newNode;
    printNode(head);
}

// Insert at End
void insertAtEnd(Node *head){
    Node *newNode;
    Node *temp=head;
    newNode=new Node();
    cout<<"Enter Node to add at last: ";
    cin>>newNode->data;
    while(temp->next!=nullptr) temp=temp->next;
    temp->next=newNode;
    temp=temp->next;
    temp->next=nullptr;
    printNode(head);
}

// Reverse Linked List
void reverseLL(Node *&head){
    Node *temp1,*temp2;
    temp1=head;
    temp2=head->next;
    temp1->next=nullptr;
    while(temp2!=nullptr){
        head=temp2;
        temp2=temp2->next;
        head->next=temp1;
        temp1=head;
    }
}

// Middle of Linked List
int lenll(Node *head){
    Node *temp=head;
    int len=0;
    while(temp!=nullptr){
        len++;
        temp=temp->next;
    }
    return len;
}

int midele(Node *head){
    Node *temp;
    int len=lenll(head);
    int i=0;
    while(i!=(len/2)-1){
        i++;
        temp=temp->next;
    }
    temp=temp->next;
    return temp->data;
}

// Detect Cycle in Linked List
void createcycle(Node *&head){
    Node *temp=nullptr;
    Node *newNode=nullptr;
    int choice=1;
    while(choice){
        newNode=new Node();
        cout<<"Enter Element: ";
        cin>>newNode->data;
        if(head==nullptr) temp=head=newNode;
        else{
            temp->next=newNode;
            temp=newNode;
        }
        cout<<"Do you want to add more Node (0/1): ";
        cin>>choice;
    }
    temp->next=head;
}

bool detectcycle(Node *head){
    Node *slow=head;
    Node *fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}

// All functions together - linked list
// int main(){
//     Node *temp=nullptr, *head=nullptr, *newNode=nullptr;
//     createNode(temp,head,newNode);
//     // temp=head;
//     // insertAtBegin(head);
//     // insertAtEnd(head);
//     // reverseLL(head);
//     // printNode(head);
//     // cout<<"Middle Element: "<<midele(head);
//     // createcycle(head);
//     if(detectcycle(head)==true) cout<<"Cycle exists!!";
//     else{
//         cout<<"Cycle doesn't exists\n";
//         printNode(head);
//     }
//     return 0;
// }


// Bit Manipulation

// Check Odd/Even Using Bitwise
int checkevenodd(int digit){
    // // int a=digit>>1;
    // // int b=a<<1;
    // // if(digit==b) return 0;
    // // else return 1;
    // return digit&1;
}

// Count Set Bits
int countsetbits(int digit){
    int cnt=0;
    // while (digit>=1){
    //     if(digit%2==1) cnt++;
    //     digit/=2;
    // }
    int a=digit;
    while(a!=0){                            // Brian Kernighan's Algorithm
        a=a & (a-1);
        cnt++; 
    }
    return cnt;

}

// Power of Two
int po2(int power){
    return 1<<power;
}

// Single Number (all elements twice except one)
int singlenumber(vector<int>arr){
    int xorsum=0;
    for(int i=0;i<arr.size();i++) xorsum^=arr[i];
    return xorsum;
}

// int main(){
//     // int dig;
//     // cout<<"Enter Digit: ";cin>>dig;
//     // if(checkevenodd(dig)==0) cout<<dig<<" is even";
//     // else cout<<dig<<" is odd";
//     // cout<<"No of set bits: "<<countsetbits(dig);
//     // cout<<"Power of two: "<<po2(dig);
//     // int n;
//     // cout<<"Enter number of elements: ";cin>>n;
//     // vector<int>arr(n);
//     // cout<<"Enter Elements: ";
//     // for(int i=0;i<n;i++) cin>>arr[i];
//     // cout<<"Single Number: "<<singlenumber(arr);
// }

