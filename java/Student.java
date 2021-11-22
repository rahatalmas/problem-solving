public class Student {
    int id;
    String name;
    String department;
    Student(int id,String name,String department){
        this.id = id;
        this.name = name;
        this.department= department;
    }
    public void printData(){
        System.out.println("ID: " + id );
        System.out.println("Name: "+ name);
        System.out.println("Department : " + department);
    }
}
