// Time:O(n)
// Space:O(1)
public class Is_Subsequence {
    public static boolean isSubsequence(String s, String t) {
        if(s.length() == 0){
            return true;
        }
        int br = 0;
        for(int i = 0; i < t.length(); i++){
            if(t.charAt(i) == s.charAt(br)){
                br += 1;
                if(br == s.length()){
                    return true;
                }
            }
        }
        return false;
    }
    public static void main(String[] args) {
        String s = "abc";
        String t = "ahbgdc";
        System.out.println(isSubsequence(s, t));
    }
}
