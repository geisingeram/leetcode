class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> roman = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        
        int ans=0;
        int lastvalue=0;
        
        //traverse the string from right to left
        for( int i=s.size()-1;i>=0;--i){
            int currentvalue=roman[s[i]];
            if(currentvalue>=lastvalue){
                ans+= currentvalue;
            }else{
                ans -=currentvalue;
            }
            lastvalue = currentvalue;
        }
        return ans;
    }
};