class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> ans;
    stack<int> st;
    for(int i=0;i<asteroids.size();i++)
    {
        while(!st.empty() && asteroids[i]<0 && st.top()>0){
            int diff=st.top()+asteroids[i];

            if(diff>0) asteroids[i]=0;

            else if(diff<0) st.pop();

            else{
                asteroids[i]=0;
                st.pop();
            }
        }

        if(asteroids[i]) st.push(asteroids[i]);
    }

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(),ans.end());
    return ans;
    }
};