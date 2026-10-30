class Solution {
public:
    int fib(int n) {
        int a = 0,b = 1,sum;
        if(n==1) return 1 ;
        if(n==0) return 0;
        
        for(int i=0;i<n-1;i++){
             sum =a+b;
            a = b;
            b = sum;
        }
       return sum; 

        
    }
};