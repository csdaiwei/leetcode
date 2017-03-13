/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
		
	int i, j;
	int c;

	int *result = (int *)malloc(sizeof(int)*2);

	for (i = 0; i < numsSize; ++i){

		c = target - nums[i];

		for (j = 0; j < numsSize; ++j){

			if (c == nums[j] && j != i){
				
				result[0] = i;
				result[1] = j;
				return result;
			}
			
		}
	
	}

	return ;

}