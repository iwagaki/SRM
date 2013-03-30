class Time {
public:
    string whatTime(int seconds) {

		int hour = seconds / 3600;
		int min = (seconds % 3600) / 60;
		int sec = (seconds % 3600) % 60;

        char buffer[1024];
        snprintf(buffer, sizeof(buffer), "%d:%d:%d", hour, min, sec);

        return string(buffer);
// 		ostringstream stream;
// 		stream << hour << ":" << min << ":" << sec;
// 		return stream.str();
    }
};
