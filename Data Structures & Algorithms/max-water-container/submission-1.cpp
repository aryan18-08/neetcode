class Solution {
public:
//Optimal solution O(n)
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int start=0;
        int end=n-1;
        int max_area=0;
        while(start<end){
            int area=min(heights[start],heights[end])*(end-start);
            max_area=max(area,max_area);
            if(heights[start]>=heights[end]){
                end--;
            }
            else{
                start++;
            }
        }
        return max_area;
    }
};
