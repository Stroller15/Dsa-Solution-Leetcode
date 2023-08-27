class Solution {
public:
    int integerReplacement(int N) {
        int count = 0 ;
        long long int n = N;
       while(n>1){
           if(n%2 == 0){
               n/=2;
               count ++;
           }else{
               if(((n+1)/2)%2 == 0 && n!=3 ){
                   n +=1;
                   count++;
               }else{
                   n-=1;
                   count++;
               }
           }
       } 
       return count;
    }
};