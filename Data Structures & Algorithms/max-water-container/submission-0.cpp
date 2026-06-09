class Solution {
public:
//Brute force solution
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int max_area=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int area=min(heights[i],heights[j])*(j-i);
                max_area=max(area,max_area);
            }
        }
        return max_area;
    }
};
