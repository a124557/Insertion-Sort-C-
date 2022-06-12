#include <iostream>
#include <vector>

using namespace std;


vector<int> insertionSort(vector<int> arr) {
  int j;
  
  for(int i=0; i < arr.size(); i++) {
    j = i;
    while(j > 0 && arr[j-1] > arr[j]) {
      swap(arr[j], arr[j-1]);
      j--;
    }
  }

  return arr;
  
}

int main() {
  vector<int> res = {99,44,6,2,1,5,63,87,283,4,0};
  vector<int> solved = insertionSort(res);
  for(auto i:solved) {
    cout << i << " ";
  }
}