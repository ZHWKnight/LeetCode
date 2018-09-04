//--------------------------------------������˵����-------------------------------------------
//		����˵�������ַ������� Binary-GuessNumber
//		�����������Ҵ�?1?��?n?ѡ��һ�����֡� ����Ҫ����ѡ�����ĸ����֡�ÿ����´��ˣ��һ��������������Ǵ��˻���С�ˡ�
//                  �����һ��Ԥ�ȶ���õĽӿ�?guess(int num)�����᷵�� 3 �����ܵĽ����-1��1?��?0��
//		�����������ò���ϵͳ��Windows 10 64bit
//		������������IDE�汾��Visual Studio 2017
//		2018��09��04�� Created by @ZHWKnight
//		2018��09��04�� Revised by @ZHWKnight
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