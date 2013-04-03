class CCipher {
public:
    string decode(string cipherText, int shift) {
        int N = cipherText.size();
        string result;

        for (int i = 0; i < N; ++i)
            result += 'A' + (((cipherText[i] - 'A') + 26 - shift) % 26);

        return result;
    }
};
