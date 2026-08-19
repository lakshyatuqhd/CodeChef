class Solution{
    public int findElement(int[] a){
        int n=a.length;
        int[] r=new int[n];
        r[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            r[i]=Math.min(a[i],r[i+1]);
        }
        int l=a[0];
        for(int i=1;i<n-1;i++){
            if(l<=a[i]&&a[i]<=r[i+1]){
                return a[i];
            }
            l=Math.max(l,a[i]);
        }
        return -1;
    }
}