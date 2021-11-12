import java.util.*;

public class Heap {

    static void swap(int a,int b){
        int temp = a;
        a=b;
        b=temp;
    }

    static void maxHeapify(int i,int arr[],int n){
        int largest = i;
        int l = (2*i)+1;
        int r = (2*i)+2;
        if(l < n && arr[l] > arr[largest]){
            largest = l;
        }
        if(r < n && arr[r] > arr[largest]){
            largest = r;
        }
        if(largest != i){
            int temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;
            maxHeapify(largest,arr,n);
        }
    }

    static void buildHeap(int arr[],int n){
        int idx = (n/2)+1;
        for(int i=idx;i>=0;i--){
            maxHeapify(i,arr,n);
        }
    }

    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        buildHeap(arr,n);
        for(int i=0;i<n;i++){
            System.out.print(arr[i] + " ");
        }
        System.out.print("/n");
    }
}
