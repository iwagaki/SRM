class ImageDithering {
public:
    int count(string dithered, vector <string> screen) {
        int H = screen.size();
        int W = screen[0].size();
        int N = dithered.size();

		int count = 0;
		for (int i = 0; i < H; ++i) {
			for (int j = 0; j < W; ++j) {
				for (int k = 0; k < N; ++k) {
					if (screen[i][j] == dithered[k])
						count++;
				}
			}
		}
		return count;
    }
};
