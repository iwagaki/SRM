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

class BearSong {
public:
    int countRareNotes(vector <int> notes) {
        int count[1001] = {0,};
        int rare = 0;

        for (vector<int>::iterator it = notes.begin(); it != notes.end(); ++it) {
            count[*it]++;
        }

        for (int i = 0; i < 1001; i++) {
            if (count[i] == 1)
                rare++;
        }

        return rare;
    }

    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {9,10,7,8,9}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(0, Arg1, countRareNotes(Arg0)); }
	void test_case_1() { int Arr0[] = {8,8,7,6,7,3,5,10,9,3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(1, Arg1, countRareNotes(Arg0)); }
	void test_case_2() { int Arr0[] = {234,462,715,596,906}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; verify_case(2, Arg1, countRareNotes(Arg0)); }
	void test_case_3() { int Arr0[] = {17}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(3, Arg1, countRareNotes(Arg0)); }
	void test_case_4() { int Arr0[] = {1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,
1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,
1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(4, Arg1, countRareNotes(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE                                                                                                                                    
int main() {
    BearSong testRunner;
    testRunner.run_test(-1);

    return 0;
}
// END CUT HERE
