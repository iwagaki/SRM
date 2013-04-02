class YahtzeeScore {
public:
    int maxPoints(vector <int> toss) {
        int points = 0;

        for (vector<int>::iterator i = toss.begin(); i != toss.end(); ++i) {
            int sum = 0;
            for (vector<int>::iterator j = toss.begin(); j != toss.end(); ++j) {
                if (*j == *i)
                    sum += *j;
            }
            points = max(points, sum);
        }

        return points;
    }
};
