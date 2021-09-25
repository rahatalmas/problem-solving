//package uniAssignments;
import java.util.*;

public class Allprime{
    
    static void findAllPrimeUsingSeiveAlgo(int n){
        int arr[] = new int[n+1];
        arr[0]=0;
        arr[1]=0;
        for(int i=2;i<=n;i++){
            arr[i]=1;
        }
        for(int i=2;i<n/2;i++){
            if(arr[i]==1){
                for(int j=2;i*j<=n;j++){
                    arr[i*j]=0;
                }
            }
        }
        for(int k=2;k<=n;k++){
            if(arr[k]!=0){
                System.out.println(k);
            }
        }
    }

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("enter your range : ");
        int n = input.nextInt();
        findAllPrimeUsingSeiveAlgo(n);
    }
}