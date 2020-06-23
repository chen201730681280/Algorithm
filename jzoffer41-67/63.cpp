

class Solution {
public:
    vector<int> v;
    void Insert(int num)
    {
        v.push_back(num);

    }

    double GetMedian()
    { 
        sort(v.begin(), v.end());
        int sz = v.size();
        if (sz & 1) {
            return static_cast<double>(v[sz >> 1]);
        }
        else {
            return static_cast<double>(v[sz >> 1] + v[(sz - 1) >> 1]) / 2;
        }
    }

};