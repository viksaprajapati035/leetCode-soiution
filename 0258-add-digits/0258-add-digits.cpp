class Solution {
public:
    int addDigits(int num) {
        
        while(num>=10){
            
            
            int r=0;
            while( num!=0){
                
                r = r + num%10;
                num = num/10;
            }
            
           num = r;
             
        }
        return num;
    }
};