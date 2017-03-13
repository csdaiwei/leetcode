class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        m = {}
        l = len(nums)

        # 48ms
        for i in range(0, l):
            c = target - nums[i]
            if m.has_key(c):
                if m[c] != i:
                    return [i, m[c]]
            m[nums[i]] = i
            
        '''
        # 60ms
        for i in range(0, l):
        	m[nums[i]] = i
        for i in range(0, l):
        	t = target - nums[i]
        	if m.has_key(t):
        	    if i != m[t]:
        		    return [i, m[t]]
        '''
