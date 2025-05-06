//Reverse the Array


/*Input: arr[] = {c}  
Output: {5, 6, 2, 3, 4, 1}
Explanation: The first element 1 moves to last position, the second element 4 moves to second-last and so on.


Input: arr[] = {4, 5, 1, 2} 
Output: {2, 1, 5, 4}
Explanation: The first element 4 moves to last position, the second element 5 moves to second last and so on.*/

// C++ Program to reverse an array using temporary array

#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr,int n){
    vector<int> temp(n);
    
    for(int i=0;i<n;i++){
        temp[i]=arr[n-i-1];
        
    }
    
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
int main(){
    vector<int> arr = {5, 6, 2, 3, 4, 1};
    int n = arr.size();
    reverseArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}