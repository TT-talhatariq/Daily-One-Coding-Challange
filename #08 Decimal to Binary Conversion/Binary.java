
import java.util.Scanner;
public class Binary {
    public static void main(String [] args){
        int number;         //Decimal Number input
        String result = "";  //For Storing Binary value

        Scanner var = new Scanner(System.in);
        number = var.nextInt();
        while(number > 1){
            result += number%2;
            number /= 2;
        }
        result += "1";

        String temp = "";
        //Reversing String
        for(int i=result.length()-1; i>=0; i--){
            temp += result.charAt(i);
        }
        System.out.println(temp);

    }
}
