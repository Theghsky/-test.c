﻿//请实现一个函数用来匹配包含'. '和'*'的正则表达式。模式中的字符'.'表示任意一个字符，而'*'表示它前面的字符可以出现任意次（含0次）。在本题中，匹配是指字符串的所有字符匹配整个模式。例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，但与"aa.a"和"ab*a"均不匹配。
//
//示例 1:
//
//输入:
//s = "aa"
//p = "a"
//输出 : false
//解释 : "a" 无法匹配 "aa" 整个字符串。
//示例 2 :
//
//	输入 :
//	s = "aa"
//	p = "a*"
//	输出 : true
//	解释 : 因为 '*' 代表可以匹配零个或多个前面的那一个元素, 在这里前面的元素就是 'a'。因此，字符串 "aa" 可被视为 'a' 重复了一次。
//	示例 3 :
//
//输入:
//s = "ab"
//p = ".*"
//输出 : true
//解释 : ".*" 表示可匹配零个或多个（'*'）任意字符（'.'）。
//示例 4 :
//
//	输入 :
//	s = "aab"
//	p = "c*a*b"
//	输出 : true
//	解释 : 因为 '*' 表示零个或多个，这里 'c' 为 0 个, 'a' 被重复一次。因此可以匹配字符串 "aab"。
//	示例 5 :
//
//	输入 :
//	s = "mississippi"
//	p = "mis*is*p*."
//	输出 : false
//
//	来源：力扣（LeetCode）
//	链接：https ://leetcode.cn/problems/zheng-ze-biao-da-shi-pi-pei-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

bool isMatch(char* s, char* p)
{
    if (*p == '\0')
    {
        if (*s == '\0')
            return true;
        else
            return false;
    }

    if (*(p + 1) == '*')
    {
        if (isMatch(s, p + 2))
            return true;
        if (*s != '\0' && (*s == *p || *p == '.') && isMatch(s + 1, p))
            return true;
    }

    if (*s != '\0' && (*s == *p || *p == '.') && isMatch(s + 1, p + 1))
        return true;
    else
        return false;
}