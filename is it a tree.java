import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Scanner;
import java.util.Set;
 

public class Main {
     
    public static void main(String[] args) {
         
        Scanner sc = new Scanner(System.in);
        int time = 1;
        while (sc.hasNext()) {
            int start = sc.nextInt();
            int end = sc.nextInt();
            if (start == -1 && end == -1) {
                break;
            }
            HashMap<Integer, Integer> map = new HashMap<>();
            boolean isTree = true;
            while (start != 0 && end != 0) {
                if (start == end) {
                    isTree = false;
                }
                if (map.containsKey(start)) {
                    map.put(start, map.get(start) + 1);
                }
                else {
                    map.put(start, 0);
                }
                if (map.containsKey(end)) {
                    map.put(end, map.get(end) + 1);
                }
                else {
                    map.put(end, 1);
                }
                start = sc.nextInt();
                end = sc.nextInt();
            }
            Set<Map.Entry<Integer, Integer>> set = map.entrySet();
            int nullParent = 0;
            for (Entry<Integer, Integer> entry : set) {
                if (nullParent > 1 || entry.getValue() > 1) {
                    isTree = false;
                    break;
                }
                if (entry.getValue() == 0) {
                    nullParent++;
                }
            }
            if (isTree) {
                System.out.println("Case " + (time++) + " is a tree.");
            }
            else {
                System.out.println("Case " + (time++) + " is not a tree.");
            }
        }
        sc.close();
    }
     
}