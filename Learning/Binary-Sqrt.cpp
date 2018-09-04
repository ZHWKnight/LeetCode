//--------------------------------------������˵����-------------------------------------------
//		����˵�������ַ���ƽ���� Binary-Sqrt
//		�������������㲢���� x ��ƽ���������� x �ǷǸ����������ڷ������������������ֻ���������Ĳ��֣�С�����ֽ�����ȥ��
//		�����������ò���ϵͳ��Windows 10 64bit
//		������������IDE�汾��Visual Studio 2017
//		2018��09��04�� Created by @ZHWKnight
//		2018��09��04�� Revised by @ZHWKnight
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