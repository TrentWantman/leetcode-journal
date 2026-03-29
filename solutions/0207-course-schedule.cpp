// 207. Course Schedule
// Medium | Depth-First Search
// https://leetcode.com/problems/course-schedule/
// Time: O(n) | Space: O(n)

class Solution {
public:

    bool dfs(int course, unordered_map<int, vector<int>>& map, unordered_set<int>& visited, unordered_set<int>& safe){
        if(safe.count(course)){return true;}
        if (visited.count(course)){ return false;}
        visited.insert(course);

        bool result = true;
        
        if(map.count(course)){
            for (int i = 0; i < map[course].size(); i++){
                result = dfs(map[course][i], map, visited, safe);
                if (result == false){
                    return false;
                }
            }
        }
        safe.insert(course);
        visited.erase(course);
        return true;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> map;
        unordered_set<int> visited;
        unordered_set<int> safe;
        bool result = false;

        for (int i = 0; i < prerequisites.size(); i++){
            map[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        for(int i = 0; i < numCourses; i++){
            if(!dfs(i, map, visited, safe)){return false;}
            visited.clear();
        }
        return true;
    }
};