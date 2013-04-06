class TheSimilarNumbers {
public:
    int find(int lower, int upper) {
        int current = lower;
        int count = 1;

        for (;;) {
            int target = current;
            while ((current <= target * 10) && (target <= current * 10)) {
                ++target;
            }
            if (target > upper)
                break;
            current = target;
            ++count;
        }

        return count;
    }
};
