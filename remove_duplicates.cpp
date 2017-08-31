 /*Time:  O(n)
 Space: O(1)

 Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
 
 Do not allocate extra space for another array, you must do this in place with constant memory.
 
 For example,
 Given input array A = [1,1,2],
 
 Your function should return length = 2, and A is now [1,2].
*/

class Solution{
public:
	int remove_duplicates(vector<int>& nums){
		int last = -1;
		for(const auto& num : nums){
			if (last == -1 || nums[last] != num){
				nums[++last] = num;
			}
		}
		return last + 1;
	}
}