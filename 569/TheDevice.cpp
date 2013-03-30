class TheDevice {
public:
    int minimumAdditional(vector <string> plates) {
        int M = plates[0].size();
        int zero[M];
        int one[M];
        memset(zero, 0, sizeof(zero));
        memset(one, 0, sizeof(one));
            
        for(vector<string>::iterator it = plates.begin(); it != plates.end(); ++it) {
            for (int i = 0; i < M; ++i) {
                if ((*it)[i] == '0')
                    ++zero[i];
                if ((*it)[i] == '1')
                    ++one[i];
            }
        }
            
        int numOfPlates = 0;
        for (int i = 0; i < M; ++i)
            numOfPlates = max(numOfPlates, (zero[i] == 0 ? 1 : 0) + (one[i] < 2 ? 2 - one[i] : 0));
            
        return numOfPlates;
    }
};
