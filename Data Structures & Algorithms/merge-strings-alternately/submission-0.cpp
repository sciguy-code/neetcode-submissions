class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
        int sz1 = word1.size();
        int sz2 = word2.size();
        int i = 0, j = 0;
        while (i < sz1 && j < sz2){
            str += word1[i++];
            str += word2[j++];
        }

        while (i < sz1){
            str += word1[i++];
        }

        while (j < sz2){
            str += word2[j++];
        }

        return str;
    }
};