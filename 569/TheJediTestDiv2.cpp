class TheJediTestDiv2 {
public:
    int countSupervisors(vector <int> students, int Y, int J) {
        int numOfFloors = students.size();
        int minCount = INT_MAX;

        for (int i = 0; i < numOfFloors; ++i) {
            int count = 0;

            for (int j = 0; j < numOfFloors; ++j) {
                int n = students[j];
                if (j == i)
                    n = max(0, n - Y);
                count += (n + (J - 1)) / J;
            }
            
            minCount = min(minCount, count);
        }

        return minCount;
    }
};
