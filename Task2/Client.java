// Filename: Client.java
package Task2;

//***********************************************************************
// Class: Client
// Represents a client in the system with basic information like ID, name, and email.
// Applied Principles:
// - Single Responsibility Principle (SRP): Responsible solely for storing client data
//***********************************************************************

public class Client {
    private int id;
    private String name;
    private String email;

    public Client(int id, String name, String email) {
        this.id = id;
        this.name = name;
        this.email = email;
    }

    public int getId() { return id; }
    public String getName() { return name; }
    public String getEmail() { return email; }
}
 {
    
}
