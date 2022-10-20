// Time:O(nlogn)
// Space:O(1)
import java.util.*;
public class Best_Poker_Hand{
    public static String bestHand(int[] ranks, char[] suits) {
        int n = suits.length;
        int count = 0;
        for(int i = 0; i < n - 1; i++){
            if(suits[i] == suits[i+1]){
                count += 1;
            }
        }
        if(count == n - 1){
            return "Flush";
        }
        count = 0;
        int tc = 0;
        Arrays.sort(ranks);
        for(int i = 0; i < n - 1; i++){
            if(ranks[i] == ranks[i+1]){
                tc += 1;
            }
            else{
                if(tc > count){
                    count = tc;
                }
                tc = 0;
            }
        }
        if(tc>count){
            count=tc;
        }
        if(count >= 2){
            return "Three of a Kind";
        }
        else if(count == 1){
            return "Pair";
        }
        return "High Card";
    }
    public static void main(String[] args) {
        int[] ranks = {4,4,2,4,4};
        char[] suits = {'d','a','a','b','c'};
        System.out.println(bestHand(ranks, suits));
    }
}
