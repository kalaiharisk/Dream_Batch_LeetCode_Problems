class Solution {
public:

    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int newc) {
            if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size() || image[sr][sc]!=newc)
            {
                return;
            }
            image[sr][sc]=color;
            dfs(image,sr+1,sc,color,newc);
            dfs(image,sr-1,sc,color,newc);
            dfs(image,sr,sc+1,color,newc);
            dfs(image,sr,sc-1,color,newc);
        }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       int newc=image[sr][sc];
       if(newc!=color)
       {

       dfs(image,sr,sc,color,newc);
       }
       return image;
    }
};