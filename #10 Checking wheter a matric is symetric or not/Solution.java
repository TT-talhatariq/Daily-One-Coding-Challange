import java.util.Scanner;


class Main {
    public static void main(String[] args) {
        // put your code here
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        while ( n > 10) {
            n = scanner.nextInt();
        }
        int [][] array = new int[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                array[i][j] = scanner.nextInt();
            }
        }
        boolean check = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(array[i][j] != array[j][i]){
                    check = false;
                    break;
                }
            }
        }
        if(!check){
            System.out.println("NO");
        }
        else
            System.out.println("YES");
    }
    
}
