class Solution {
public:
   int maxScore(vector<int>& cp, int k) {
	int sum = accumulate(begin(cp), begin(cp) + k, 0), ans = sum;
	for(int l(k-1), r(size(cp) - 1); l >= 0; l--, r--)
		ans = max(ans, sum += (cp[r] - cp[l]));
	return ans;
}
};