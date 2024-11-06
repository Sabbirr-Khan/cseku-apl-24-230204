// Filename: Task.java
package Task2;

//***********************************************************************
// Class: Task
// Represents a specific task within a project, with properties like task ID, description, and status.
// Applied Principles:
// - Single Responsibility Principle (SRP): Responsible solely for task-related data
//***********************************************************************

public class Task {
    private int taskId;
    private String description;
    private String status;

    public Task(int taskId, String description) {
        this.taskId = taskId;
        this.description = description;
        this.status = "Pending"; // Default status
    }

    public int getTaskId() { return taskId; }
    public String getDescription() { return description; }
    public String getStatus() { return status; }

    public void setStatus(String status) { this.status = status; }
}
