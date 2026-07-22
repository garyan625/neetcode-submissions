class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>arr;
        for(auto &m:mp){
            arr.push_back({m.second,m.first});
        }
        // sort in desc order
        sort(arr.rbegin(),arr.rend());
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(arr[i].second);
        }
        return res;

    }
};
