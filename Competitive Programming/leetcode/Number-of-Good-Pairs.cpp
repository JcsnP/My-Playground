#include <bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int>& nums){
  unsigned int pairs = 0;
  for(unsigned int i = 0; i < nums.size(); i++){
    for(unsigned int j = 0; j < nums.size(); j++){
      if(nums[i] == nums[j] and i < j){
        ++pairs;
      }
     }
   }
   return pairs;
}

int main(){
  vector<int> nums = {1,2,3,1,1,3};
  
  //call function
  cout << numIdenticalPairs(nums);
}
