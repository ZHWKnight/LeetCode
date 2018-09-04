//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：二分法查找 Binary-Search
//		程序描述：假设按照升序排序的数组在预先未知的某个点上进行了旋转。
//				 ( 例如，数组 [0,1,2,4,5,6,7] 可能变为 [4,5,6,7,0,1,2] )。
//				 搜索一个给定的目标值，如果数组中存在这个目标值，则返回它的索引，否则返回 -1 。
//		开发测试所用操作系统：Windows 10 64bit
//		开发测试所用IDE版本：Visual Studio 2017
//		2018年09月04日 Created by @ZHWKnight
//		2018年09月04日 Revised by @ZHWKnight
//---------------------------------------------------------------------------------------------
int search(int* nums, int numsSize, int target) {
	if (numsSize == 0 || target < nums[0] || target > nums[numsSize - 1])
		return -1;
	int left = 0, right = numsSize - 1;
    int mid = (left + right) / 2;
	while (left <= right) {
		if (target > nums[mid])
			left = mid + 1;
		else if(target < nums[mid])
			right = mid - 1;
		else
			return mid;
        mid = (left + right) / 2;
	} return -1;
}