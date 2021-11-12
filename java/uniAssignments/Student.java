public class Student {
    private String name;
    private int id;
    private String department;
    private String section;

    public Student(/*String name, int id,String department,String section*/){
        /*this.name = name;
        this.id = id;
        this.department = department;
        this.section = section;
        */
    }

    public void setName(String newName){
        this.name = newName;
    }
    public void setId(int newId){
        this.id = newId;
    }
    public void setDepartment(String newDepartment){
        this.department = newDepartment;
    }
    public void setSection(String newSection){
        this.section = newSection;
    }

    public String getname(){
        return name;
    }
    public int getId(){
        return id;
    }
    public String getDepartment(){
        return department;
    }
    public String getSection(){
        return section;
    }
    public void getStudentInfo(){
        System.out.println(name + " " + id + " " + department + " " + section);
    }
}

