class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(candidates, target, 0, new ArrayList<>(), res);
        return res;
    }

    void backtrack(int[] c, int target, int idx, List<Integer> cur, List<List<Integer>> res) {
        if (target == 0) {
            res.add(new ArrayList<>(cur));
            return;
        }
        if (target < 0 || idx == c.length) return;

        cur.add(c[idx]);
        backtrack(c, target - c[idx], idx, cur, res);
        cur.remove(cur.size() - 1);

        backtrack(c, target, idx + 1, cur, res);
    }
}