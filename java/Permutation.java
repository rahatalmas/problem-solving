import java.util.*;

class Permutation{
    static Scanner input = new Scanner(System.in);
    static void swap(char a,char b){
        char temp = a;
        a = b;
        b = temp;
    }
    static void allPermutation(String str,int l){
        int r = str.length();
        if(l==r){
            System.out.println(str);
        }
        for(int i=l;i<r;i++)

        }
    }
    public static void main(String[] args){
        String str = input.nextLine();
        allPermutation(str,0);
    }
}