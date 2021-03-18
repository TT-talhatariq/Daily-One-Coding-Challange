import java.util.Scanner;


class Main {
    public static void main(String[] args) {
        // put your code here
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        while ( n > 100) {
            n = scanner.nextInt();
        }
        int m = scanner.nextInt();
        while ( m > 100) {
            m = scanner.nextInt();
        }
        int [][] array = new int[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                array[i][j] = scanner.nextInt();
            }
        }
     
        int large = Integer.MIN_VALUE;
        int row = 0, col = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(array[i][j] > large){
                    row = i;
                    col = j;
                    large = array[i][j];
                }
            }
        }
       
            System.out.println(row + " " + col);
    }   
}
