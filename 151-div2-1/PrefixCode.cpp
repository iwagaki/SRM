// BEGIN CUT HERE
// END CUT HERE
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class PrefixCode {
public:
    string isOne(vector <string> words) {
        for (size_t i = 0; i < words.size(); i++) {
            for (size_t j = 0; j < words.size(); j++) {
                if (i != j) {
                    if (words[j].find(words[i]) == 0) {
                        stringstream ss;
                        ss << "No, " << i;
                        return ss.str();
                    }
                }
            }
        }
        return "Yes";
    }

    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"trivial"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Yes"; verify_case(0, Arg1, isOne(Arg0)); }
	void test_case_1() { string Arr0[] = {"10001", "011", "100", "001", "10"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "No, 2"; verify_case(1, Arg1, isOne(Arg0)); }
	void test_case_2() { string Arr0[] = {"no", "nosy", "neighbors", "needed"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "No, 0"; verify_case(2, Arg1, isOne(Arg0)); }
	void test_case_3() { string Arr0[] = {"1010", "11", "100", "0", "1011"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Yes"; verify_case(3, Arg1, isOne(Arg0)); }
	void test_case_4() { string Arr0[] = {"No", "not"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Yes"; verify_case(4, Arg1, isOne(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE                                                                                                                                    
int main() {
    PrefixCode testRunner;
    testRunner.run_test(-1);

    return 0;
}
// END CUT HERE
