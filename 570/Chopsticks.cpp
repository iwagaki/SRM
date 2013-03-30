class Chopsticks {
public:
    int getmax(vector <int> length) {
        int count = 0;

        while (length.size() > 0) {
            int len = length.back();
            length.pop_back();

            for (vector<int>::iterator it = length.begin(); it != length.end(); ++it) {
                if (len == *it) {
                    ++count;
                    length.erase(it);
                    break;
                }
            }
        }
        
        return count;
    }
};
