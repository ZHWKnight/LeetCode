//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：二分法猜数字 Binary-GuessNumber
//		程序描述：我从?1?到?n?选择一个数字。 你需要猜我选择了哪个数字。每次你猜错了，我会告诉你这个数字是大了还是小了。
//                  你调用一个预先定义好的接口?guess(int num)，它会返回 3 个可能的结果（-1，1?或?0）
//		开发测试所用操作系统：Windows 10 64bit
//		开发测试所用IDE版本：Visual Studio 2017
//		2018年09月04日 Created by @ZHWKnight
//		2018年09月04日 Revised by @ZHWKnight
//---------------------------------------------------------------------------------------------
// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    long guessNumber(long n) {
        if(n==0||n==1)
            return n;
        long left=1,right=n;
        long mid=(left+right)/2;
        
        while(right-left>1){
            if(guess(mid)==-1)
                right=mid;
            else if(guess(mid)==1)
                left=mid;
            else
                return mid;
            mid=(left+right)/2;
        }return (guess(left)==0)?left:right;
    } 
};