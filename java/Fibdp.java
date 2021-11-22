import java.util.Scanner;

class Fibdp{
    static Scanner input = new Scanner(System.in);
    static int fib(int n,int arr[]){
        if(n==1){
            return n;
        }
        if(n == 0){
            return n;
        }
        if(arr[n] != -1){
            return arr[n];
        }
        return arr[n] = fib(n-1,arr) + fib(n-2,arr);
    }
    static int fibrecur(int n,int arr[]){
        if(n==1 || n==0){
            return n;
        }
        return fibrecur(n-1,arr)+fibrecur(n-2,arr);
    }
    public static void main(String[] args){
        int n = input.nextInt();
        int arr[] = new int[n*n];
        for(int i=0;i<n*n;i++){
            arr[i] = -1;
        }
        System.out.println(fib(n,arr));
        System.out.println(fibrecur(n,arr));
    }
}