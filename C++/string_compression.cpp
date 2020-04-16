class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
                
        for(int i = chars.size()-1; i > -1; i--) {
            if(i && chars[i] == chars[i-1]) { 
                count ++;
                chars.erase(chars.begin()+i);
            } else {
                if(count > 9) {
                    chars.insert(chars.begin()+i+1, (count%10)+'0');
                    chars.insert(chars.begin()+i+1, (count/10)+'0');
                }
                else if(count > 1 && count <= 9) chars.insert(chars.begin()+i+1, count+'0');
                count = 1;
            }
        }
        return chars.size();
    }
};
