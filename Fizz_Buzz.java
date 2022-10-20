import java.util.ArrayList;
import java.util.List;

// Time:O(n)
// Space:O(n)
public class Fizz_Buzz {
    public static List<String> fizzBuzz(int n) {
        List<String> l = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            if(i % 3 == 0 && i % 5 == 0){
                l.add("FizzBuzz");
            }
            else if(i % 3 == 0){
                l.add("Fizz");
            }
            else if(i % 5 == 0){
                l.add("Buzz");
            }
            else{
                l.add(Integer.toString(i));
            }
        }
        return l;
    }
    public static void main(String[] args) {
        int n = 10;
        for(String i:fizzBuzz(n)){
            System.out.print(i+" ");
        }        
    }
}
