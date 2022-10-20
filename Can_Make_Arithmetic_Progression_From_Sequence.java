//Time:O(nlogn)
//Space:O(1)
import java.util.Arrays;
public class Can_Make_Arithmetic_Progression_From_Sequence {
    public static boolean canMakeArithmeticProgression(int[] arr) {
        Arrays.sort(arr);
        int temp=arr[0]-arr[1];
        for(int i=1;i<arr.length-1;i++){
            if(arr[i]-arr[i+1]==temp){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        int nums[]={3,5,1};
        System.out.println(canMakeArithmeticProgression(nums));
    }
}

