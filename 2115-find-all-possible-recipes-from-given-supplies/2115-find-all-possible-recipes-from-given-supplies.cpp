class Solution {
public:

    bool check(int i,
               vector<string>& recipes,
               vector<vector<string>>& ingredients,
               unordered_set<string>& mp,
               unordered_map<string,int>& rmap,
               vector<int>& visit)
    {
        if(visit[i]==1) return true; 
        if(visit[i]==-1) return false;

        visit[i] = -1; 

        for(string s : ingredients[i]){

            if(mp.count(s)) continue;

            if(!rmap.count(s)) return false;

            int idx = rmap[s];

            if(!check(idx, recipes, ingredients, mp, rmap, visit))
                return false;
        }

        visit[i] = 1;
        mp.insert(recipes[i]);
        return true;
    }


    vector<string> findAllRecipes(vector<string>& recipes,
                                  vector<vector<string>>& ingredients,
                                  vector<string>& supplies) {

        unordered_set<string> mp;

        for(string s : supplies)
            mp.insert(s);

        unordered_map<string,int> rmap;

        for(int i=0;i<recipes.size();i++)
            rmap[recipes[i]] = i;

        vector<int> visit(recipes.size(),0);

        vector<string> ans;

        for(int i=0;i<recipes.size();i++){

            if(check(i,recipes,ingredients,mp,rmap,visit))
                ans.push_back(recipes[i]);
        }

        return ans;
    }
};