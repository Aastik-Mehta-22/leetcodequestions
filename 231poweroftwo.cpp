class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        int x=0;
        for(i=0;i<=30;i++){
        int ans = pow(2,i);
        if(ans==n){
            x=1;
        }
    }
    if(x==1){
        return true;
    }
    else{
        return false;
    }
    }
};