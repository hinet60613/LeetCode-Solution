class Solution {
public:
    int bulbSwitch(int n) {
        int i=0;
        for(i=0; i<=46340; i++) {
            if(i*i > n) {
                return i-1;
            }
        }
        return i;
    }
};
