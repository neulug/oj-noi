import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int[] t = new int[3];
        Scanner input = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {
            t[i] = input.nextInt();
        }
        input.close();
        System.out.print(t[1]);
    }
}
