class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x/2;
        long   mid=(e-s)/2 +s;
        while(s<=e){
            if(mid*mid ==x)
                return mid;
            if(mid*mid>x)
                e=mid-1;
            if(mid*mid <x)
                s=mid+1;
            mid= (e-s)/2 +s;
        }
        if(mid*mid>x)
            return mid-1;
   return mid;
    }
    
};