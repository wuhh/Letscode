class Solution {
public:
	vector<vector<int> > threeSum(vector<int> &num) {
		vector <vector <int> > s;
		if(num.size()<3)
			return s;			
		sort(num.begin(), num.end());
		for(int i=0; i<num.size()-2; i++){
			int j=i+1;
			if(i>0 && num[i] == num[i-1]){
				continue;
			}
			int k=num.size()-1;
			while(j<k){
				if(num[i]+num[j]+num[k] < 0){
					j++;
				}
				else if(num[i]+num[j]+num[k] > 0){
					k--;
				}
				else {
					vector<int> t;
					t.push_back(num[i]);
					t.push_back(num[j]);
					t.push_back(num[k]);
					s.push_back(t);
					++j;
					--k;
					while (num[j] == num[j-1]){
						j++;
					}
					while(num[k] == num[k+1]){
						k--;
					}
				}
			}
		}

		return s;
	}
};
