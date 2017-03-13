class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		unordered_map<int, int> hash;
		vector<int> result;
		int c;

		for (int i = 0; i < nums.size(); ++i){

			c = target - nums[i];

			if(hash.find(c) != hash.end()){

				result.push_back(i);
				result.push_back(hash[c]);
			}

			hash[nums[i]] = i;
		}

		return result;
		
	}
};