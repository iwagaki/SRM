class ExerciseMachine {
public:
    int getPercentages(string time) {
// 		int hour = atoi(time.substr(0, 2).c_str());
// 		int min = atoi(time.substr(3, 2).c_str());
// 		int sec = atoi(time.substr(6, 2).c_str());
        int hour, min, sec;
        sscanf(time.c_str(), "%2d:%2d:%2d", &hour, &min, &sec);
		int total_sec = hour * 3600 + min * 60 + sec;

        int count = 0;
        for (int i = 1; i < 100; ++i) {
            if ((total_sec * i / 100) * 100 == total_sec * i)
                ++count;
        }

		return count;
    }
};
