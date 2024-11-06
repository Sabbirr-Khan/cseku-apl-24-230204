// Filename: WorkSample.java
package Task2;

//***********************************************************************
// Class: WorkSample
// Represents a sample of work in a freelancer's portfolio, with a description.
// Applied Principles:
// - Single Responsibility Principle (SRP): Responsible solely for storing work sample data
//***********************************************************************

public class WorkSample {
    private int id;
    private String description;

    public WorkSample(int id, String description) {
        this.id = id;
        this.description = description;
    }

    public int getId() { return id; }
    public String getDescription() { return description; }
}

