class Solution {
public:
    bool isAnagram(string s, string t) {
       //plan
       /*
       iterate s and put the chars in the hashmap
       iterate t and put the chars in the hashmap

       iterate throught the characters in s
       check if the frequency of the two maps are equal
        if not return false

        if outside the loop return true
       */
        if(s.size() != t.size())
        {
            return false;
        }

        vector<int>s_map(26, 0);
        vector<int>t_map(26, 0);

        for(int x: s)
        {
            s_map[x - 'a']++;
        }
        for(int x: t)
        {
            t_map[x - 'a']++;
        }

        return s_map == t_map;
    }
};