#include <string>
#include <vector>
#include <map>

#include <iostream>

using namespace std;

void thing()
{

}

class WordDictionary {
public:
    /** Initialize your data structure here. */
    WordDictionary() {

    }

    /** Adds a word into the data structure. */
    void addWord(string word) {
        mapp[word.size()].emplace_back(word);
    }

    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        vector<string_view> ref(mapp[word.size()].size());
        vector<string>& vec = mapp[word.size()];

        for (int i = 0; i < ref.size(); i++)
            ref[i] = vec[i];

        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] == '.')
                continue;

            for (int j = 0; j < ref.size(); j++)
            {
                if (word[i] != ref[j][i])
                {
                    ref.erase(ref.begin() + j);
                    j--;
                }
            }
        }

        return ref.size() > 0;
    }

private:
    map<int, vector<string>> mapp;
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */


//
//#include <string>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//class WordDictionary {
//public:
//    /** Initialize your data structure here. */
//    WordDictionary() {
//
//    }
//
//    /** Adds a word into the data structure. */
//    void addWord(string word) {
//        mapp[word]++;
//
//        if (mapp[word] == 1)
//            words.emplace_back(word);
//    }
//
//    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
//    bool search(string word) {
//        vector<string_view> refs(words.size());
//
//        for (int i = 0; i < refs.size(); i++)
//            refs[i] = words[i].c_str();
//
//        for (int i = 0; i < refs.size(); i++)
//        {
//            if (refs[i].size() != word.size())
//            {
//                refs.erase(refs.begin() + i);
//                i--;
//            }
//            else
//            {
//                for (int j = 0; j < word.length(); j++)
//                {
//                    if (word[j] == '.')
//                        continue;
//
//                    if (word[j] != refs[i][j])
//                    {
//                        refs.erase(refs.begin() + i);
//                        i--;
//                        break;
//                    }
//                }
//            }
//        }
//
//        return refs.size() != 0;
//    }
//
//private:
//    vector<string> words;
//    map<string, int> mapp;
//
//};
//
///**
// * Your WordDictionary object will be instantiated and called as such:
// * WordDictionary* obj = new WordDictionary();
// * obj->addWord(word);
// * bool param_2 = obj->search(word);
// */