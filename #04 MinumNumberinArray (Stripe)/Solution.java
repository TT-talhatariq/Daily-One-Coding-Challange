import java.util.ArrayList;
import java.util.List;

class Test{
    public int minimum_positive_number(List temp){
        for(int i=1; i<=temp.size(); i++){
            if (!temp.contains(i)) return i;
        }
        for(int j = temp.size()+1;; j++){
            if (!temp.contains(j)) return j;
        }
    }
}


public class Solution {
public static void main(String [] args){
    List main = new ArrayList(4);
    main.add(1);
    main.add(0);
    main.add(3);
    main.add(-1);
    Test var = new Test();
    System.out.println(var.minimum_positive_number(main));
}

}

