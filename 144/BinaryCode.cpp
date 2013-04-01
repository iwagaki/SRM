class BinaryCode {
public:
    vector <string> decode(string message) {
		vector<string> test;
		test.push_back(decode2("0", message));
		test.push_back(decode2("1", message));
		return test;
    }
	string decode2(string first, string message) {
		string original = first;
        int N = message.size();

		for (int i = 0; i < N; ++i) {
            int left = 0;
            int center = 0;

            if (i > 0)
                left = original[i - 1] - '0';
            center = original[i] - '0';
            
            int total = message[i] - '0';
            int right = total - center - left;
            if (right < 0 || right > 1)
                return "NONE";
            if (i == N - 1) {
                if (right == 0)
                    break;
                if (right != 0)
                    return "NONE";
            }

            original += '0' + right;
        }

		return original;
	}
};
