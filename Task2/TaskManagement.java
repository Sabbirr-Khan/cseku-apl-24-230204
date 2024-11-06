// Filename: TaskManagement.java
package Task2;

import java.util.HashMap;
import java.util.Map;

//***********************************************************************
// Class: TaskManagement
// Manages tasks within a project, including adding, updating, and removing tasks.
// Applied Principles:
// - Single Responsibility Principle (SRP): Focused solely on managing tasks
// - Interface Segregation Principle (ISP): Task management is kept separate from project and client management
//***********************************************************************

public class TaskManagement {
    private Map<Integer, Task> tasks = new HashMap<>();

    public void addTask(int taskId, String description) {
        tasks.put(taskId, new Task(taskId, description));
    }

    public Task getTask(int taskId) {
        return tasks.get(taskId);
    }

    public void updateTaskStatus(int taskId, String status) {
        Task task = tasks.get(taskId);
        if (task != null) {
            task.setStatus(status);
        }
    }

    public void removeTask(int taskId) {
        tasks.remove(taskId);
    }
}
