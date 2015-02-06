/*
 * @file reverse_words_in_a_string.cpp
 * @author Akagi201
 * @date 2015/02/06
 *
 * https://oj.leetcode.com/problems/reverse-words-in-a-string/
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void reverseWords(string &s) {

    bool wordStart = false;
    vector<string> v;

    const char *pHead = s.c_str();
    const char *pStr, *pBegin, *pEnd;

    for (pStr = pHead; *pStr != '\0'; pStr++) {
        if (!isspace(*pStr) && wordStart == false) {
            wordStart = true;
            pBegin = pStr;
            continue;
        }

        if (isspace(*pStr) && wordStart == true) {
            wordStart = false;
            pEnd = pStr;
            v.insert(v.begin(), s.substr(pBegin - pHead, pEnd - pBegin));
        }
    }

    if (wordStart == true) {
        pEnd = pStr;
        v.insert(v.begin(), s.substr(pBegin - pHead, pEnd - pBegin));
    }

    if (v.size() > 0) {
        s.clear();
        char space = ' ';
        vector<string>::iterator it;
        for (it = v.begin(); it != v.end(); ++it) {
            s = s + *it;
            s.push_back(space);
        }
        s.erase(s.end() - 1);
    } else {
        s.clear();
    }
    cout << "[" << s << "]" << endl;

    return;
}