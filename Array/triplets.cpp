#include<iostream>
#include<algorithm>
using namespace std;

// In sorted array , Find triplets of sum with also each pair sorted and return the list of pairs also sorted
// int triplets(int arr[],int n,int target){
//      for(int i=0;i<n-2;i++){
//           for(int j=i+1;j<n-1;j++){
//                for(int k=j+1;k<n;k++){
//                     if(arr[i] + arr[j] + arr[k] == target){
//                          cout<< "(" << arr[i] << "," << arr[j] << "," << arr[j] << ")" <<endl;
//                     }
//                }
//           }     
//      }
// }

// int OptimizeTriplets(int arr[], int n,int target) {
// //     sort(arr.begin(), arr.end());  // Sort the array

//     for (int i = 0; i < n - 2; i++) {
//         // Avoid duplicates for i
//      //    if (i > 0 && arr[i] == arr[i - 1])
//      //        continue;

//         int left = i + 1;
//         int right = n - 1;

//         while (left < right) {
//             int sum = arr[i] + arr[left] + arr[right];

//             if (sum == target) {
//                 cout << "Triplet: " << arr[i] << ", " << arr[left] << ", " << arr[right] << endl;

//                 // Skip duplicates for left and right
//                 while (left < right && arr[left] == arr[left + 1]) left++;
//                 while (left < right && arr[right] == arr[right - 1]) right--;

//                 left++;
//                 right--;
//             }
//             else if (sum < target) {
//                 left++;
//             }
//             else {
//                 right--;
//             }
//         }
//     }
// }

int main(){
     int arr[] = {-2,-1,0,1,3};
     int size = sizeof(arr) / sizeof(arr[0]);
     int sum = 0;
     // triplets(arr,size,sum);
     OptimizeTriplets(arr,size,sum);
}