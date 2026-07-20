class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        vector<int> left;
        vector<int> right;
        for(int i=0;i<heights.size();i++){
        while(!st.empty() && heights[st.top()]>=heights[i])
        {
        st.pop();
        }
        
        if(st.empty())
        {
            left.push_back(-1);
        }
        else{
            left.push_back(st.top());
        }
        st.push(i);
        }
        
        while(!st.empty())
        {
            st.pop();
        }
        for(int i=heights.size()-1;i>=0;i--){
        while(!st.empty() && heights[st.top()]>=heights[i])
        {
        st.pop();
        }
        if(st.empty())
        {
            right.push_back(heights.size());
        }
        else{
            right.push_back(st.top());
        }
        st.push(i);
        }
        
        reverse(right.begin(), right.end());
        int max1=0;
        for(int i=0;i<heights.size();i++)
        {
            int area=heights[i]*(right[i]-left[i]-1);
            max1=max(area,max1);
        }
        return max1;
    }
};