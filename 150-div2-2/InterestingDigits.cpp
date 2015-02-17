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

class InterestingDigits {
public:
    vector <int> digits(int base) {
        vector<int> result;

        for (int i = 2; i < base; i++) {
            bool isCandidate = true;

            for (int a = 0; a < base; a++) {
                for (int b = 0; b < base; b++) {
                    for (int c = 0; c < base; c++) {
                        if ((((a * base * base + b * base + c) % i) == 0) && (((a + b + c) % i) != 0))
                            isCandidate = false;
                    }
                }
            }

            if (isCandidate)
                result.push_back(i);
        }

        return result;
    }

    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arg0 = 10; int Arr1[] = { 3,  9 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, digits(Arg0)); }
	void test_case_1() { int Arg0 = 3; int Arr1[] = { 2 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, digits(Arg0)); }
	void test_case_2() { int Arg0 = 9; int Arr1[] = { 2,  4,  8 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, digits(Arg0)); }
	void test_case_3() { int Arg0 = 26; int Arr1[] = { 5,  25 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, digits(Arg0)); }
	void test_case_4() { int Arg0 = 30; int Arr1[] = { 29 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, digits(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE                                                                                                                                    
int main() {
    InterestingDigits testRunner;
    testRunner.run_test(-1);

    return 0;
}
// END CUT HERE
