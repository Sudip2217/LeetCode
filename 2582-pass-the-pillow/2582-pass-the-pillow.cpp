class Solution {
public:
    int passThePillow(int n, int t) {
        int rounds = t/(n-1);
        int k = t % (n-1); 
        if(rounds % 2 == 0)
        return k+1;
        else 
        return n - k;
    }
};