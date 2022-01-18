class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
     
        int j = -1;
        for(int i=0;i<flowerbed.size();++i)
        {
            if(flowerbed[i])
            {
               n -= (i-j-1)/2;
               j = i+1;
            }
        }
    if(!flowerbed.back())
        
        n -= (flowerbed.size()-j)/2;
        
        return n <=0;
    }
};
