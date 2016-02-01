
class Person {
	int id;
	String name;
	Person() { 
	id =-1;
	name="NULL";}
	Person(int id,String n){ 
	 this.id=id; name=n;}
	Person(Person obj) {
 	id=obj.id;
	name=obj.name; }	
	void display() { 
	System.out.println("Id "+id);
	System.out.println("Name "+name); }
void setdata(int id, String nm)
 {
 this.id=id; name=nm;
}
       }
class Emp extends Person
 {
   float sal;
Emp(){	
super();sal=-1;}
Emp(int id, String nm, float s)
 {
   super(id,nm);
   sal=s;
}
Emp(float sal)
 {
   this.sal=sal;
}
Emp(Emp E)
 {
   super(E);
    sal=E.sal;
 }
void display()
 {
   super.display();
    System.out.println("Salary = " +sal);
 }

void setdata(int id, String nm, float s)
 {
  super.setdata(id,nm);
  sal=s;
}
}
class mainclass
 {
   public static void main(String ar[])
 {
   Emp E=new Emp();
   E.setdata(10,"Amit",1000);
   E.display();
   Emp F= new Emp();
   F=E;
   F.setdata(11,"Kapil",2999);
   E.display();

}
 }


	


