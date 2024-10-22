class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordSet(wordList.begin(), wordList.end());
        if(wordSet.find(endWord)==wordSet.end())
        {
            return 0;
        }
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        unordered_set<string> visited;
        visited.insert(beginWord);
        while(!q.empty())
        {
            auto[current,level]=q.front();
            q.pop();
            for(int i=0;i<current.size();i++)
            {
                string temp=current;
                for(char c='a';c<='z';c++ )
                {
                    temp[i]=c;
                    if(temp==endWord)
                    {
                        return level+ 1;
                    }
                    if (wordSet.find(temp) != wordSet.end() && visited.find(temp)==visited.end())              {
                        q.push({temp, level + 1}); // Add the new word to the queue
                        visited.insert(temp);  
                    }
                }

            }
        }
        return 0;

        
    }
};