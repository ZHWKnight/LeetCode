//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：二分法解平方根 Binary-Sqrt
//		程序描述：计算并返回 x 的平方根，其中 x 是非负整数。由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。
//		开发测试所用操作系统：Windows 10 64bit
//		开发测试所用IDE版本：Visual Studio 2017
//		2018年09月04日 Created by @ZHWKnight
//		2018年09月04日 Revised by @ZHWKnight
//---------------------------------------------------------------------------------------------
int mySqrt(int x) {
    if(x==1||x==0)
        return x;
    long mid,diff,right=x,left=1;
    mid=(left+right)/2;
    while(mid!=left){
        diff=mid*mid-x;
        if(diff>0)
            right=mid;
        else if(diff<0)
            left=mid;
        else
            return mid;
        mid=(left+right)/2;
    }return mid;
}