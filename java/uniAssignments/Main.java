import java.util.Scanner;

public class Main {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args){
        int n = input.nextInt();
        Student s[] = new Student[n];
        for(int i=0;i<n;i++){
            s[i] = new Student();
            String name = input.next();
            int id = input.nextInt();
            String department = input.next();
            String section = input.next();
            s[i].setName(name);
            s[i].setId(id);
            s[i].setDepartment(department);
            s[i].setSection(section);
        }
        for(int i=0;i<n;i++){
            s[i].getStudentInfo();
        }
    }
}
