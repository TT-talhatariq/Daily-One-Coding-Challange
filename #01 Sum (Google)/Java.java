import java.util.*;
 class Test{
    public boolean function(int [] arr, int number){
     List<Integer> list = new ArrayList<Integer>();
     for(int i : arr){
         if (list.contains(number-i)) return true;
         else list.add(i);
     }
     return false;
    }

}
public class Main
{
	public static void main(String[] args) {
	    int [] arr = {2, 36 , 64, 6, 8};
	    Test abc = new Test();
	   System.out.println(abc.function(arr, 14));
	}
}
