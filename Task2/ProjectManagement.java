// Filename: ProjectManagement.java
package Task2;

import java.util.HashMap;
import java.util.Map;

//***********************************************************************
// Class: ProjectManagement
// Manages creation, updates, and assignments for projects, keeping project-related operations separate.
// Applied Principles:
// - Single Responsibility Principle (SRP): Focused solely on project management
// - Interface Segregation Principle (ISP): Keeps project management responsibilities separate from other functionalities
//***********************************************************************

public class ProjectManagement {
    private Map<Integer, Project> projects = new HashMap<>();

    public void addProject(int id, String title) {
        projects.put(id, new Project(id, title));
    }

    public void assignFreelancer(int projectId, int freelancerId) {
        Project project = getProject(projectId);
        if (project != null) {
            project.setFreelancer(freelancerId);
        }
    }

    public Project getProject(int id) {
        return projects.get(id);
    }
}

