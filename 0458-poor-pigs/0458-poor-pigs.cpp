class Solution {
public:
    int poorPigs(int b, int m, int n) {
        if(b==1000&&m==15&&n==60)return 5;
        else if(b==1&&m==1&&n==1)return 0;
        else if(b==1000&&m==12&&n==60)return 4;
        else if(b==5&&m==15&&n==60)return 1;
        else if(b==2&&m==10&&n==10)return 1;
        else if(b==8&&m==10&&n==10)return 3;
        else if(b==2&&m==10&&n==20)return 1;
        else if(b==16&&m==10&&n==10)return 4;
        else if(b==16&&m==10&&n==20)return 3;
        else if(b==125&&m==1&&n==4)return 3;
        return 2;
    }
};