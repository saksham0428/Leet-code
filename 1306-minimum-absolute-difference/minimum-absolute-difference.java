class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        int n=arr.length;
        List< List<Integer>> blist=new ArrayList<>();
        Arrays.sort(arr);
        int i=0;
        int diff=arr[i+1]-arr[i];
        for(i=0;i<n-1;i++){
            diff=Math.min(diff,arr[i+1]-arr[i]);
            }
            for(i=0;i<n-1;i++){
                if(arr[i+1]-arr[i]==diff){
                    List<Integer> slist=new ArrayList<>();
                    slist.add(arr[i]);
                    slist.add(arr[i+1]);
                    blist.add(slist);
                }
            }
        return blist;
    }
}