class MyCalendarThree {
    using Map = map<int, int>; // +1 for i-th begin (inclusive), -1 for j-th end (non-inclusive)
    Map m;
public:
    int book(int i, int j, int t = 0, int best = 0) {
        ++m[i];
        --m[j];
        for (auto it = m.begin(); it != m.end(); ++it) {
            auto [_, cnt] = tie(it->first, it->second);
            best = max(best, t += cnt);
        }
        return best;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */