import  java.util.*;
 class Test{
    public  List multiply_list(int []temp){
        List<Integer> list = new ArrayList<Integer>();
        for(int i:temp) {
            int sum = 1;
            for (int j : temp) {
                sum*=j;
            }
	for(int i=0; i<temp.length; i++)
            list.add(sum/arr[i]);
        }
    return list;
    }

 }

public class Solution {

    public static void main(String []args){
        int []arr = {1,2,3,4,5};
        List<Integer> array = new ArrayList<Integer>();
        Test variable = new Test();
        array = variable.multiply_list(arr);
        System.out.println("After: " + array);
    }
}
