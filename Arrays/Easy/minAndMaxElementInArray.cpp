
//Maximum and Minimum Element in an Array


/*Input: arr[] = {3, 5, 4, 1, 9}
Output: Minimum element is: 1
              Maximum element is: 9


Input: arr[] = {22, 14, 8, 17, 35, 3}
Output:  Minimum element is: 3
              Maximum element is: 35

*/

#include<iostream>
#include<climits>
using namespace std;

void minAndMax(int arr[],int n){
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    
    if (n == 0) {
    cout << "Array is empty." << endl;
    return;
    }else{
    for(int i=0;i<n;i++){
        
     if (n == 0) {
    cout << "Array is empty." << endl;
    return;
    } 
      if(arr[i]>maxVal){
          maxVal = arr[i];
      }
      
      if(arr[i]<minVal){
          minVal = arr[i];
      }

    }
    }
    
    cout<<"Minimum Element is "<<minVal<<endl;
    cout<<"Maximum Element is "<<maxVal<<endl;

}
int main(){
    int arr[]={22, 14, 8, 17, 35, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    minAndMax(arr,n);
    return 0;
}