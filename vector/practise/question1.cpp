#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        int j,k;
        sort(nums.begin() , nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            j=i+1;
            k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];

                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }else{
                ans.push_back({nums[i] , nums[j] , nums[k]});
                j++,k--;

                while(j<k && nums[j] == nums[j-1]) j++;
                }
            }
        }
        return ans;
    }
   
};

int main(){
    vector<int> vec={-1,-1,2,3,4,5,6,7,8};
    Solution a;

    a.threeSum(vec);
}